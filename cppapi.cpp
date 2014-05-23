#include "cppapi.h"
#include "cppprogex.h"
#include "cppwriter.h"

///////////////////////////////////////////////////////////////////////////////////////////////////

extern CppProgramEx gCppProgram;
CppWriter gCppWriter;

//////////////////////////////////////////////////////////////////////////
// CppApiFunction method implementations:

CppApiFunction::CppApiFunction(CppFunction* cppFunc, CppApiCompound* owner)
    :func_   (cppFunc)
    ,owner_  (owner)
	,attr_	 (cppFunc->attr_)
	,params_ (cppFunc->params_)
{
    assert(func_ != NULL);
}

CppApiFunction::CppApiFunction(CppConstructor* ctor, CppApiCompound* owner)
	:ctor_   (ctor)
	,owner_  (owner)
	,attr_   (ctor->attr_)
	,params_ (ctor->args_)
{
	assert(ctor != NULL);
	this->addAttrib(kConstructor);
	if(params_ && params_->size() == 1 && params_->front().cppObj->objType_ == CppObj::kVar)
	{ // Check if it is copy-constructor
		const CppVar* argVar = params_->front().varObj;
		if(argVar->baseType_ == ctor->name_ && argVar->typeAttr_&(kConst|kByRef))
			this->addAttrib(kCopyConstructor);
	}
}

CppApiFunction::CppApiFunction(CppDestructor* dtor, CppApiCompound* owner)
	:dtor_   (dtor)
	,owner_  (owner)
	,attr_	 (dtor->attr_)
	,params_ (NULL)
{
	assert(dtor != NULL);
	assert(dtor->name_.substr(1) == owner->name());
	this->addAttrib(kDestructor);
}

void CppApiFunction::calcCAPIName() const
{
    capiName_ = procName();
}

void CppApiFunction::calcProcName() const
{
    if(isCopyConstructor())
        procName_ = gParams.copyCtorCAPIPrefix;
    else if(isConstructor())
        procName_ = gParams.ctorCAPIPrefix;
    else if(isDestructor())
        procName_ = gParams.dtorCAPIPrefix;
    else
        procName_ = funcName();
    procName_ += procNameSfx_;
}

inline void emitType(std::ostream& stm, const CppVarType* typeObj, const CppApiCompound* typeResolver, bool emitHandle = false) {
    if(typeObj == NULL) return;
    if(typeObj->typeAttr_&kConst)
        stm << "const ";
    // FIXME: We are assuming that all types will be of some sort of compound object.
    // This will break when there will be some typedefed or enum type is used.
    CppApiCompound* resolvedType = (CppApiCompound*) (typeResolver ? typeResolver->resolveTypeName(typeObj->baseType_) : NULL);
    if(resolvedType != NULL)
        stm << (emitHandle ? resolvedType->fullHandleName() : "::" + resolvedType->fullName());
    else
        stm << typeObj->baseType_;
    for(unsigned short i = 0; i < typeObj->ptrLevel_; ++i)
        stm << '*';
    if(typeObj->typeAttr_&kByRef)
        stm << '&';
}

inline std::ostream& operator <<(std::ostream& stm, const CppVarType* typeObj) {
    emitType(stm, typeObj, NULL);
    return stm;
}

inline std::ostream& operator <<(std::ostream& stm, const CppVarType& typeObj) {
    stm << &typeObj;
    return stm;
}

inline void emitVar(std::ostream& stm, const CppVar* varObj, const CppApiCompound* typeResolver, bool emitHandle = false) {
    if(varObj == NULL) return;
    emitType(stm, varObj, typeResolver, emitHandle);
    stm << ' ' << varObj->name_;
}

inline std::ostream& operator <<(std::ostream& stm, const CppVar* varObj) {
    emitVar(stm, varObj, NULL);
    return stm;
}

inline std::ostream& operator <<(std::ostream& stm, const CppVar& varObj) {
    stm << &varObj;
    return stm;
}

void CppApiFunction::emitArgsForDecl(std::ostream& stm, bool resolveTypes /*= false*/, bool emitHandle /*= false*/) const
{
	//FIXME for function pointer type params, it currently handles only functions whose parameter is not function-pointer type.

    if(!hasParams())
        return;
    const CppApiCompound* typeResolver = resolveTypes ? owner_ : NULL;
    emitVar(stm, params_->front().varObj, typeResolver, emitHandle);
    for(CppParamList::const_iterator paramIter = params_->begin(); (++paramIter) != params_->end();)
    {
        stm << ", ";
        emitVar(stm, paramIter->varObj, typeResolver, emitHandle);
    }
}

void CppApiFunction::emitArgsForCall(std::ostream& stm, bool emitHandle /*= false*/) const
{
	//FIXME for function pointer type params, it currently handles only functions whose parameter is not function-pointer type.

    if(!hasParams())
        return;
    stm     << params_->front().varObj->name_;
    //FIXME for enum and other non compound types.
    CppApiCompound* resolvedType = (CppApiCompound*) ((owner_ && emitHandle) ? owner_->resolveTypeName(params_->front().varObj->baseType_) : NULL);
    if(resolvedType)
        stm << "->" << gParams.handleGetterMethod << "()";
    for(CppParamList::const_iterator paramIter = params_->begin(); (++paramIter) != params_->end();)
    {
        stm << ", " << paramIter->varObj->name_;
        //FIXME for enum and other non compound types.
        CppApiCompound* resolvedType = (CppApiCompound*) ((owner_ && emitHandle) ? owner_->resolveTypeName(paramIter->varObj->baseType_) : NULL);
        if(resolvedType)
            stm << "->" << gParams.handleGetterMethod << "()";
    }
}

void CppApiFunction::emitOrigDecl(std::ostream& stm, CppApiIndent indentation /* = CppApiIndent */) const
{
    stm     << indentation;
    if(isStatic())
        stm << "static ";
    else if(isVirtual())
        stm << "virtual ";
    else if(isInline())
        stm << "inline ";
    if(isFunction() && func_->retType_)
        stm << func_->retType_ << ' ';
    stm     << funcName() << '(';
    emitArgsForDecl(stm);
    stm     << ')';
    if(isConst())
        stm << " const";
    if(isPureVirtual())
        stm << " /*= 0*/";
    stm     << ";\n";
}

void CppApiFunction::emitCAPIDefn(std::ostream& stm, CppApiIndent indentation /* = CppApiIndent */) const
{
    stm     << indentation;
    if(isConstructor())
        stm << "::" << owner_->fullName() << "*";
    else if(isDestructor())
        stm << "void";
    else
		emitType(stm, func_->retType_, owner_);
    stm     << " __stdcall ";
    stm     << capiName() << '(';
    if(!isStatic() && (isMethod() || isDestructor()))
    {
        stm << "::" << owner_->fullName() << "* " << owner_->objName();
        if(hasParams())
            stm << ", ";
    }
    emitArgsForDecl(stm, true);
    stm     << ") {\n";
    stm     << ++indentation;
    if(isConstructor())
    {
        stm << "return new ::" << owner_->fullName();
        stm     << '(';
        emitArgsForCall(stm);
        stm     << ");\n";
    }
    else if(isDestructor())
    {
        stm << "delete " << owner_->objName() << ";\n";
    }
    else
    {
        if(func_->retType_ && !func_->retType_->isVoid())
            stm << "return ";
        if(isStatic())
           stm  << "::" << owner_->fullName() << "::";
        else
           stm  << owner_->objName() << "->";
        stm     << funcName();
        stm     << '(';
        emitArgsForCall(stm);
        stm     << ");\n";
    }
    stm     << --indentation << "}\n";
}

void CppApiFunction::emitProcType(std::ostream& stm, CppApiIndent indentation /* = CppApiIndent */) const
{
    stm     << indentation;
    stm     << "typedef ";
    if(isConstructor())
        stm << owner_->fullHandleName() << "*";
    else if(isDestructor())
        stm << "void";
    else
		emitType(stm, func_->retType_, owner_, true);
    stm     << " (__stdcall *" << procType() << ") (";
    if(!isStatic() && (isDestructor() || isMethod()))
    {
        stm << owner_->fullHandleName() << "* " << owner_->objName();
        if(hasParams())
            stm << ", ";
    }
    emitArgsForDecl(stm, true, true);
    stm     << ");\n";
}

///////////////////////////////////////////////////////////////////////////////////////////////////

std::ostream& operator <<(std::ostream& stm, CppDocComment* cmnt)
{
    stm << cmnt->doc_;
    return stm;
}

void emitInheritanceList(std::ostream& stm, CppApiCompoundArray& inhList, CppObjProtLevel prot, char& sep)
{
    if(inhList.empty()) return;
    stm << ' ' << sep << ' ' << prot << ' ' << inhList.front()->fullName();
    sep = ',';
    for(CppApiCompoundArray::const_iterator itr = inhList.begin()+1; itr != inhList.end(); ++itr)
        stm << sep << prot << ' ' << (*itr)->fullName();
}

void CppApiCompound::calcWrappingNamespaceSeq() const
{
   typedef std::stack<const CppApiCompound*> CppApiCompoundStack;
   CppApiCompoundStack owners;
   for(const CppApiCompound* owner = outer(); owner != NULL && owner->cppCompoundObj_->isNamespaceLike(); owner = owner->outer())
      owners.push(owner);
   while(!owners.empty())
   {
      const CppApiCompound* owner = owners.top();
      wrappingNsDecl_ += "namespace " + owner->name() + " {";
      wrappingNses_ += "::" + owner->name();
      closingNsBraces_ += '}';
      owners.pop();
   }
   wrappingNsCalculated_ = true;
}

const CppApiObj* CppApiCompound::resolveTypeName(const std::string& typeName) const
{
    TypeNameToCppApiObj::const_iterator itr = typeNameToCppApiObj_.find(typeName);
    if(itr != typeNameToCppApiObj_.end())
        return itr->second;
    const CppApiObj* resolvedType = gCppProgram.getCppApiObjFromTypeName(typeName, cppCompoundObj_);
    typeNameToCppApiObj_[typeName] = resolvedType;
    return resolvedType;
}

void CppApiCompound::emitDecl(std::ostream& stm, CppApiIndent indentation /* = CppApiIndent */)
{
    stm     << indentation;
    stm     << cppCompoundObj_->compoundType_;
    if(cppCompoundObj_->isNamespaceLike())
    {
        // Make sure cib-id is assigned to this compound object
        if(cibId_ == 0)
           cibId_ = gParams.getNextCibClassId();
        stm << ' ' << name();
        if(cppCompoundObj_->isClassLike())
        {
            char sep = ':';
            emitInheritanceList(stm, parents_[kPublic], kPublic, sep);
            if(inline_)
            {
                emitInheritanceList(stm, parents_[kProtected], kProtected, sep);
                emitInheritanceList(stm, parents_[kPrivate], kPrivate, sep);
            }
        }
        stm << '\n' << indentation++ << "{\n";
    }
    CppObjProtLevel lastProt = kUnknownProt;
    int nextFuncCibId = cibId_ + 100;
    for(CppObjArray::const_iterator memItr = cppCompoundObj_->members_.begin(); memItr != cppCompoundObj_->members_.end(); ++memItr)
    {
        CppObj* mem = *memItr;
        if(!inline_ && !isMemberPublic(mem->prot_, cppCompoundObj_->compoundType_)) // We will emit only public members unless class is inline.
            continue;
        if(cppCompoundObj_->isClassLike() && lastProt != mem->prot_)
        {
            stm << --indentation << mem->prot_ << ":\n";
            ++indentation;
            lastProt = mem->prot_;
        }
        if(mem->objType_ == CppObj::kCompound)
		{
            ((CppApiCompound*) gCppProgram.CppApiObjFromCppObj(mem))->emitDecl(stm, indentation);
		}
        else if(mem->objType_ == CppObj::kFunction || mem->objType_ == CppObj::kConstructor || mem->objType_ == CppObj::kDestructor)
        {
            CppApiFunction* func = (CppApiFunction*) gCppProgram.CppApiObjFromCppObj(mem);
            if(func->cibId_ == 0)
               func->cibId_ = nextFuncCibId++;
            func->emitOrigDecl(stm, indentation);
        }
		else
		{
			gCppWriter.emit(mem, stm);
		}
    }
    if(cppCompoundObj_->isClassLike())
    {
        if(!inline_)
        {
            // Everything below this is for glue code
            // Emit forward declaration of original class as handle.
            stm << '\n' << --indentation << "public:\n";
            stm << ++indentation << cppCompoundObj_->compoundType_ << ' ' << handleName() << ";\n";
            stm << indentation << name() << '(' << handleName() << "* h)";
            CppApiCompoundArray& pubParents = parents_[kPublic];
            char baseClassCtorPrefix = ':';
            for(CppApiCompoundArray::const_iterator parentItr = pubParents.begin(); parentItr != pubParents.end(); ++parentItr)
            {
                const CppApiCompound* pubParent = *parentItr;
                stm << baseClassCtorPrefix << ' ' << pubParent->fullName() << "(0) ";
                baseClassCtorPrefix = ',';
            }
            stm << "{ __set(h); }\n";
            stm << indentation << handleName() << "* " << gParams.handleGetterMethod << "() const { return h_; }\n";
            stm << '\n' << --indentation << "protected :\n";
            ++indentation;
            for(CppApiCompoundArray::const_iterator parentItr = pubParents.begin(); parentItr != pubParents.end(); ++parentItr)
            {
                const CppApiCompound* pubParent = *parentItr;
                stm << indentation << "static " << pubParent->fullHandleName() << "* " << castToBaseName(pubParent) << "(" << handleName() << "* h);\n";
            }
            stm << indentation << "void __set(" << handleName() << "* h);\n";
            // Now emit members that are required for glueing.
            stm << '\n' << --indentation << "private :\n";
            stm << ++indentation << handleName() << "* h_;\n";
        }
        stm     << --indentation << "};\n";
    }
    else if(cppCompoundObj_->isNamespaceLike())
    {
        stm     << --indentation << "}\n";
    }

    if(outer_ && outer_->cppCompoundObj_->isCppFile())
    {
        emitDefn(stm, indentation);
    }
}

void CppApiCompound::emitBridgeDecl(std::ostream& stm, CppApiIndent indentation /* = CppApiIndent */)
{
    for(CppObjArray::const_iterator memItr = cppCompoundObj_->members_.begin(); memItr != cppCompoundObj_->members_.end(); ++memItr)
    {
        CppObj* mem = *memItr;
        if(!inline_ && !isMemberPublic(mem->prot_, cppCompoundObj_->compoundType_)) // We will emit only public members unless class is inline.
            continue;
        if(mem->objType_ == CppObj::kFunction || mem->objType_ == CppObj::kConstructor || mem->objType_ == CppObj::kDestructor)
        {
            CppApiFunction* func = (CppApiFunction*) gCppProgram.CppApiObjFromCppObj(mem);
            if(inline_) // If class is inline
            {
                if(func->isStatic() && !func->isInline()) // only non-inline static methods need bridging.
                    needsBridging_.push_back(func);
            }
            else if(mem->prot_ == kPublic)
            {
                needsBridging_.push_back(func);
            }
        }
    }
    if((cppCompoundObj_->isNamespaceLike()) == 0 || needsBridging_.empty())
        return; // Nothing to do if it is not namespace/class/struct/union.
    stm     << '\n'; // Start in new line.
    stm     << indentation << "namespace _cib_ { namespace bridge {\n";
    if(!wrappingNamespaceDeclarations().empty())
       stm  << ++indentation << wrappingNamespaceDeclarations() << '\n';
    stm     << ++indentation << "struct " << name() << " {\n";
    ++indentation;
    for(size_t idxFunc = 0; idxFunc < needsBridging_.size(); ++idxFunc)
        needsBridging_[idxFunc]->emitProcType(stm, indentation);
    CppApiCompoundArray& pubParents = parents_[kPublic];
    for(CppApiCompoundArray::const_iterator parentItr = pubParents.begin(); parentItr != pubParents.end(); ++parentItr)
    {
        const CppApiCompound* pubParent = *parentItr;
        stm << indentation << "typedef "<< pubParent->fullHandleName() << "* (__stdcall *" << castToBaseName(pubParent) << "Proc) (" << fullHandleName() << "* h);\n";
    }
    stm     << '\n'; // Start in new line.
    for(size_t idxFunc = 0; idxFunc < needsBridging_.size(); ++idxFunc)
    {
        CppApiFunction* func = needsBridging_[idxFunc];
        stm << indentation << func->procType() << ' ' << func->procName() << ";\n";
    }
    for(CppApiCompoundArray::const_iterator parentItr = pubParents.begin(); parentItr != pubParents.end(); ++parentItr)
    {
        const CppApiCompound* pubParent = *parentItr;
        stm << indentation << castToBaseName(pubParent) << "Proc " << castToBaseName(pubParent) << ";\n";
    }
    stm     << '\n'; // Start in new line.
    stm     << indentation << "static const " << name() << "& instance() {\n";
    stm     << ++indentation << "static " << name() << " bridgeIns;\n";
    stm     << indentation << "return bridgeIns;\n";
    stm     << --indentation << "}\n";
    stm     << '\n'; // Start in new line.
    stm     << --indentation << "private:\n";
    stm     << ++indentation << name() << "();\n";
    stm     << --indentation << "};\n";
    if(!wrappingNamespaceDeclarations().empty())
       stm  << --indentation << closingBracesForWrappingNamespaces() << '\n';
    stm     << --indentation << "}}\n";
}

void CppApiCompound::emitDefn(std::ostream& stm, CppApiIndent indentation /* = CppApiIndent */)
{
    for(CppObjArray::const_iterator memItr = cppCompoundObj_->members_.begin(); memItr != cppCompoundObj_->members_.end(); ++memItr)
    {
        CppObj* mem = *memItr;
        if(mem->objType_ == CppObj::kCompound)
            ((CppApiCompound*) gCppProgram.CppApiObjFromCppObj(mem))->emitDefn(stm, indentation);
    }
    // First emit the bridge class declaration.
    emitBridgeDecl(stm, indentation);
    // Emit the implementation of class methods/constructors added as part of glue code.
    stm     << '\n'; // Start in new line.
    CppApiCompoundArray& pubParents = parents_[kPublic];
    for(CppApiCompoundArray::const_iterator parentItr = pubParents.begin(); parentItr != pubParents.end(); ++parentItr)
    {
        const CppApiCompound* pubParent = *parentItr;
        stm << indentation << "inline " << pubParent->fullHandleName() << "* " << fullName() << "::" << castToBaseName(pubParent) << '(' << fullHandleName() << "* h) {\n";
        stm << ++indentation << "return _cib_::" << bridgeName() << "::instance()." << castToBaseName(pubParent) << "(h);\n";
        stm << --indentation << "}\n";
    }
    if(cppCompoundObj_->isClassLike())
    {
        stm     << '\n'; // Start in new line.
        stm     << indentation << "inline void " << fullName() << "::__set(" << fullHandleName() << "* h) {\n";
        ++indentation;
        for(CppApiCompoundArray::const_iterator parentItr = pubParents.begin(); parentItr != pubParents.end(); ++parentItr)
        {
            const CppApiCompound* pubParent = *parentItr;
            stm << indentation << pubParent->fullName() << "::" << "__set(" << castToBaseName(pubParent) << "(h));\n";
        }
        stm     << indentation << "h_ = h;\n";
        stm     << --indentation << "}\n";
    }
    for(size_t idxFunc = 0; idxFunc < needsBridging_.size(); ++idxFunc)
    {
        stm     << '\n'; // Start in new line.
        CppApiFunction* func = needsBridging_[idxFunc];
        stm     << indentation << "inline ";
        if(func->isFunction())
		{
			emitType(stm, func->func_->retType_, this);
			stm << ' ';
		}
        stm     << fullName() << "::" << func->funcName() << '('; func->emitArgsForDecl(stm); stm     << ")";
        if(func->isConst())
            stm << " const ";
        else if(func->isConstructor())
        {
            CppApiCompoundArray& pubParents = parents_[kPublic];
            char baseClassCtorPrefix = ':';
            for(CppApiCompoundArray::const_iterator parentItr = pubParents.begin(); parentItr != pubParents.end(); ++parentItr)
            {
                const CppApiCompound* pubParent = *parentItr;
                stm << baseClassCtorPrefix << ' ' << pubParent->fullName() << "(0) ";
                baseClassCtorPrefix = ',';
            }
        }
        stm     << "{\n";
        stm     << ++indentation;
        CppApiCompound* retType = NULL;
        if(func->isConstructor())
            stm << "__set(";
        else if(func->isFunction() && func->func_->retType_ && !func->func_->retType_->isVoid())
        {
            stm << "return ";
            retType = (CppApiCompound*) resolveTypeName(func->func_->retType_->baseType_);
            if(retType)
            {
               stm << "new " << retType->fullName() << "(\n";
               stm << ++indentation;
            }
        }
        stm     << "_cib_::" << bridgeName() << "::instance()." << func->procName() << "(";
        if(!func->isConstructor() && !func->isStatic())
        {
            stm << "h_";
            if(func->hasParams())
                stm << ", ";
        }
        func->emitArgsForCall(stm, true);
        stm     << ')';
        if(func->isConstructor())
            stm << ')';
        else if(retType)
           stm << '\n' << --indentation << ")";
        stm     << ";\n";
        stm     << --indentation << "}\n";
    }
}

void CppApiCompound::emitLibGlueCode(std::ostream& stm, CppApiIndent indentation /* = CppApiIndent */)
{
    if(cppCompoundObj_->isCppFile())
    {
        stm     << "#include \"cib.h\"\n";
        std::string incName = name();
        std::string::size_type sepPos = incName.rfind('/');
        if(sepPos == incName.npos)
            sepPos = incName.rfind('\\');
        if(sepPos != incName.npos)
            incName = incName.substr(sepPos+1);
        stm     << indentation << "#include \"" << incName << "\"\n";
        stm     << '\n'; // Start in new line.
        stm     << indentation << "namespace _cib_ { namespace bind {\n";
        ++indentation;
    }
    for(CppObjArray::const_iterator memItr = cppCompoundObj_->members_.begin(); memItr != cppCompoundObj_->members_.end(); ++memItr)
    {
        CppObj* mem = *memItr;
        if(mem->objType_ == CppObj::kCompound)
        {
            if(cppCompoundObj_->isNamespaceLike())
               stm << indentation++ << "namespace " << name() << " {\n";
            ((CppApiCompound*) gCppProgram.CppApiObjFromCppObj(mem))->emitLibGlueCode(stm, indentation);
            if(cppCompoundObj_->isNamespaceLike())
               stm << --indentation << "}\n";
        }
    }
    if(cppCompoundObj_->isNamespaceLike() && !needsBridging_.empty())
    {
        stm     << indentation++ << "namespace " << name() << " {\n";
        for(size_t idxFunc = 0; idxFunc < needsBridging_.size(); ++idxFunc)
        {
            CppApiFunction* func = needsBridging_[idxFunc];
            func->emitCAPIDefn(stm, indentation);
            stm << '\n'; // Start in new line.
        }

        CppApiCompoundArray& pubParents = parents_[kPublic];
        for(CppApiCompoundArray::const_iterator parentItr = pubParents.begin(); parentItr != pubParents.end(); ++parentItr)
        {
            const CppApiCompound* pubParent = *parentItr;
            stm << indentation << "::" << pubParent->fullName() << "* __stdcall " << castToBaseName(pubParent) << "(::" << fullName() << "* " << objName() << ") {\n";
            stm << ++indentation << "return " << objName() << ";\n";
            stm << --indentation << "}\n";
        }
        if(!pubParents.empty())
            stm << '\n'; // Start in new line.
        if(!needsBridging_.empty())
        {
            stm     << indentation << "class MetaInterface" << " : public ::_cib_::MetaInterface {\n";
            stm     << indentation << "protected:\n";
            stm     << ++indentation << "virtual void LoadMethods() {\n";
            ++indentation;
            for(size_t idxFunc = 0; idxFunc < needsBridging_.size(); ++idxFunc)
            {
                CppApiFunction* func = needsBridging_[idxFunc];
                stm << indentation << "AddMethod(" << func->cibId_ << ", (void*) " << func->capiName() << ");\n";
            }
            int specialMethodId = cibId_ + 1;
            for(CppApiCompoundArray::const_iterator parentItr = pubParents.begin(); parentItr != pubParents.end(); ++parentItr)
            {
                const CppApiCompound* pubParent = *parentItr;
                stm << indentation << "AddMethod(" << specialMethodId++ << ", (void*) " << castToBaseName(pubParent) << ");\n";
            }
            stm     << --indentation << "}\n";
            stm     << --indentation << "};\n";
            stm     << indentation << "::_cib_::MetaInterface* CreateMetaInterface() { return new MetaInterface(); }\n";
        }
        stm         << --indentation << "}\n";
    }
    if(cppCompoundObj_->isCppFile())
    {
            stm     << --indentation << "}}\n";
    }
}

void CppApiCompound::emitUsrGlueCode(std::ostream& stm, CppApiIndent indentation /* = CppApiIndent */)
{
    if(cppCompoundObj_->isCppFile())
    {
        stm     << "#include \"cib.h\"\n";
        std::string incName = name();
        std::string::size_type sepPos = incName.rfind('/');
        if(sepPos == incName.npos)
            sepPos = incName.rfind('\\');
        if(sepPos != incName.npos)
            incName = incName.substr(sepPos+1);
        stm     << indentation << "#include \"" << incName << "\"\n";
        stm     << '\n';
        stm     << indentation << "namespace _cib_ {\n";
        ++indentation;
    }
    for(CppObjArray::const_iterator memItr = cppCompoundObj_->members_.begin(); memItr != cppCompoundObj_->members_.end(); ++memItr)
    {
        CppObj* mem = *memItr;
        if(mem->objType_ == CppObj::kCompound)
            ((CppApiCompound*) gCppProgram.CppApiObjFromCppObj(mem))->emitUsrGlueCode(stm, indentation);
    }
    if(cppCompoundObj_->isNamespaceLike() && !needsBridging_.empty())
    {
        stm     << indentation++ << bridgeName() << "::" << name() <<"() {\n";
        stm     << indentation << "_cib_::MetaInterface metaIntrface(" << cibId_ << ");\n";
        for(size_t idxFunc = 0; idxFunc < needsBridging_.size(); ++idxFunc)
        {
            CppApiFunction* func = needsBridging_[idxFunc];
            stm << indentation << func->procName() << " = ("<< func->procType() << ") metaIntrface.GetMethod(" << func->cibId_ << ");\n";
        }
        
        int specialMethodId = cibId_ + 1;
        CppApiCompoundArray& pubParents = parents_[kPublic];
        for(CppApiCompoundArray::const_iterator parentItr = pubParents.begin(); parentItr != pubParents.end(); ++parentItr)
        {
            const CppApiCompound* pubParent = *parentItr;
            stm << indentation << castToBaseName(pubParent) << " = (" << castToBaseName(pubParent) << "Proc) metaIntrface.GetMethod(" << specialMethodId++ << ");\n";
        }
        stm     << --indentation << "}\n";
    }
    if(cppCompoundObj_->isCppFile())
    {
        stm     << --indentation << "}\n";
    }
}

void CppApiCompound::emitMetaInterfaceFactoryDecl(std::ostream& stm, CppApiIndent indentation /* = CppApiIndent */)
{
   for(CppObjArray::const_iterator memItr = cppCompoundObj_->members_.begin(); memItr != cppCompoundObj_->members_.end(); ++memItr)
   {
      CppObj* mem = *memItr;
      if(mem->objType_ == CppObj::kCompound)
         ((CppApiCompound*) gCppProgram.CppApiObjFromCppObj(mem))->emitMetaInterfaceFactoryDecl(stm, indentation);
   }
   if(cppCompoundObj_->isNamespaceLike() && !needsBridging_.empty())
   {
      stm << indentation << "namespace _cib_ { namespace bind {\n";
      stm << ++indentation << wrappingNamespaceDeclarations() << " namespace " << name() << " { ::_cib_::MetaInterface* CreateMetaInterface(); }" << closingBracesForWrappingNamespaces() << '\n';;
      stm << --indentation << "}}\n";
   }
}

void CppApiCompound::emitCodeToPopulateMetaInterfaceRepository(std::ostream& stm, CppApiIndent indentation /* = CppApiIndent */)
{
    for(CppObjArray::const_iterator memItr = cppCompoundObj_->members_.begin(); memItr != cppCompoundObj_->members_.end(); ++memItr)
    {
        CppObj* mem = *memItr;
        if(mem->objType_ == CppObj::kCompound)
            ((CppApiCompound*) gCppProgram.CppApiObjFromCppObj(mem))->emitCodeToPopulateMetaInterfaceRepository(stm, indentation);
    }
    if(cppCompoundObj_->isNamespaceLike() && !needsBridging_.empty())
        stm << indentation << "gMetaInterfaceRepository[" << cibId_ << "] = _cib_::bind" << wrappingNses() << "::" << name() << "::CreateMetaInterface();\n";
}
