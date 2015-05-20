#include "cib.h"
#include "cppprogex.h"

//////////////////////////////////////////////////////////////////////////

static CppWriter gCppWriter;

//////////////////////////////////////////////////////////////////////////

// CibCppFunction method implementations:

CibCppFunction::CibCppFunction(CppFunction* cppFunc, CibCppCompound* owner)
	: func_   (cppFunc)
	, owner_  (owner)
	, attr_   (cppFunc->attr_)
	, params_ (cppFunc->params_)
{
	assert(func_ != NULL);
}

CibCppFunction::CibCppFunction(CppConstructor* ctor, CibCppCompound* owner)
	: ctor_   (ctor)
	, owner_  (owner)
	, attr_   (ctor->attr_)
	, params_ (ctor->args_)
{
	assert(ctor != NULL);
	this->addAttrib(kConstructor);
	if(params_ && params_->size() == 1 && params_->front().cppObj->objType_ == CppObj::kVar)
	{       // Check if it is copy-constructor
		const CppVar* argVar = params_->front().varObj;
		if(argVar->baseType_ == ctor->name_ && argVar->typeAttr_&(kConst|kByRef))
			this->addAttrib(kCopyConstructor);
	}
}

CibCppFunction::CibCppFunction(CppDestructor* dtor, CibCppCompound* owner)
	: dtor_   (dtor)
	, owner_  (owner)
	, attr_   (dtor->attr_)
	, params_ (NULL)
{
	assert(dtor != NULL);
	assert(dtor->name_.substr(1) == owner->name());
	this->addAttrib(kDestructor);
}

inline void emitType(std::ostream& stm, const CppVarType* typeObj, const CibCppCompound* typeResolver, const CppProgramEx& cppProgram, const CibParams& cibParams, bool emitHandle = false) {
	if(typeObj == NULL) return;
	if(typeObj->typeAttr_&kConst)
		stm << "const ";
	// FIXME: We are assuming that all types will be of some sort of compound object.
	// This will break when there will be some typedefed or enum type is used.
	CibCppCompound* resolvedType = (CibCppCompound*) (typeResolver ? typeResolver->resolveTypeName(typeObj->baseType_, cppProgram) : NULL);
	if(resolvedType != NULL)
		stm << (emitHandle ? resolvedType->fullHandleName(cibParams) : "::" + resolvedType->fullName());
	else
		stm << typeObj->baseType_;
	for(unsigned short i = 0; i < typeObj->ptrLevel_; ++i)
		stm << '*';
	if(typeObj->typeAttr_&kByRef)
		stm << '&';
}

inline void emitVar(std::ostream& stm, const CppVar* varObj, const CibCppCompound* typeResolver, const CppProgramEx& cppProgram, const CibParams& cibParams, bool emitHandle = false) {
	if(varObj == NULL) return;
	emitType(stm, varObj, typeResolver, cppProgram, cibParams, emitHandle);
	stm << ' ' << varObj->name_;
}

void CibCppFunction::emitArgsForDecl(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, bool resolveTypes /*= false*/, bool emitHandle /*= false*/) const
{
	//FIXME for function pointer type params, it currently handles only functions whose parameter is not function-pointer type.

	if(!hasParams())
		return;
	const CibCppCompound* typeResolver = resolveTypes ? owner_ : NULL;
	emitVar(stm, params_->front().varObj, typeResolver, cppProgram, cibParams, emitHandle);
	for(CppParamList::const_iterator paramIter = params_->begin(); (++paramIter) != params_->end(); )
	{
		stm << ", ";
		emitVar(stm, paramIter->varObj, typeResolver, cppProgram, cibParams, emitHandle);
	}
}

void CibCppFunction::emitArgsForCall(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, bool emitHandle /*= false*/) const
{
	//FIXME for function pointer type params, it currently handles only functions whose parameter is not function-pointer type.

	if(!hasParams())
		return;
	stm << params_->front().varObj->name_;
	//FIXME for enum and other non compound types.
	CibCppCompound* resolvedType = (CibCppCompound*) ((owner_ && emitHandle) ? owner_->resolveTypeName(params_->front().varObj->baseType_, cppProgram) : NULL);
	if(resolvedType)
		stm << "->" << cibParams.handleGetterMethod << "()";
	for(CppParamList::const_iterator paramIter = params_->begin(); (++paramIter) != params_->end(); )
	{
		stm << ", " << paramIter->varObj->name_;
		//FIXME for enum and other non compound types.
		CibCppCompound* resolvedType = (CibCppCompound*) ((owner_ && emitHandle) ? owner_->resolveTypeName(paramIter->varObj->baseType_, cppProgram) : NULL);
		if(resolvedType)
			stm << "->" << cibParams.handleGetterMethod << "()";
	}
}

void CibCppFunction::emitOrigDecl(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CibIndent indentation /* = CibIndent */) const
{
	stm << indentation;
	if(isStatic())
		stm << "static ";
	else if(isVirtual())
		stm << "virtual ";
	else if(isInline())
		stm << "inline ";
	if(isFunction() && func_->retType_)
	{
		emitType(stm, func_->retType_, NULL, cppProgram, cibParams, false);
		stm << ' ';
	}
	stm << funcName() << '(';
	emitArgsForDecl(stm, cppProgram, cibParams);
	stm << ')';
	if(isConst())
		stm << " const";
	if(isPureVirtual())
		stm << " = 0";
	stm << ";\n";
}

void CibCppFunction::emitCAPIDefn(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CibIndent indentation /* = CibIndent */) const
{
	stm << indentation;
	if(isConstructor())
		stm << "::" << owner_->fullName() << "*";
	else if(isDestructor())
		stm << "void";
	else
		emitType(stm, func_->retType_, owner_, cppProgram, cibParams);
	stm << " __stdcall ";
	stm << capiName(cibParams) << '(';
	if(!isStatic() && (isMethod() || isDestructor()))
	{
		stm << "::" << owner_->fullName() << "* " << owner_->objName();
		if(hasParams())
			stm << ", ";
	}
	emitArgsForDecl(stm, cppProgram, cibParams, true);
	stm << ") {\n";
	stm << ++indentation;
	if(isConstructor())
	{
		stm << "return new ::" << owner_->fullName();
		stm << '(';
		emitArgsForCall(stm, cppProgram, cibParams);
		stm << ");\n";
	}
	else if(isDestructor())
	{
		stm << "delete " << owner_->objName() << ";\n";
	}
	else
	{
		if(func_->retType_ && !func_->retType_->isVoid())
			stm << "return ";
		if(!isStatic())
			stm << owner_->objName() << "->";
		stm << "::" << owner_->fullName() << "::";
		stm << funcName();
		stm << '(';
		emitArgsForCall(stm, cppProgram, cibParams);
		stm << ");\n";
	}
	stm << --indentation << "}\n";
}

void CibCppFunction::emitProcType(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CibIndent indentation /* = CibIndent */) const
{
	stm << indentation;
	stm << "typedef ";
	if(isConstructor())
		stm << owner_->fullHandleName(cibParams) << "*";
	else if(isDestructor())
		stm << "void";
	else
		emitType(stm, func_->retType_, owner_, cppProgram, cibParams, true);
	stm << " (__stdcall *" << procType(cibParams) << ") (";
	if(!isStatic() && (isDestructor() || isMethod()))
	{
		stm << owner_->fullHandleName(cibParams) << "* " << owner_->objName();
		if(hasParams())
			stm << ", ";
	}
	emitArgsForDecl(stm, cppProgram, cibParams, true, true);
	stm << ");\n";
}

///////////////////////////////////////////////////////////////////////////////////////////////////

std::ostream& operator <<(std::ostream& stm, CppDocComment* cmnt)
{
	stm << cmnt->doc_;
	return stm;
}

void emitInheritanceList(std::ostream& stm, CibCppCompoundArray& inhList, CppObjProtLevel prot, char& sep)
{
	if(inhList.empty()) return;
	stm << ' ' << sep << ' ' << prot << ' ' << inhList.front()->fullName();
	sep = ',';
	for(CibCppCompoundArray::const_iterator itr = inhList.begin()+1; itr != inhList.end(); ++itr)
		stm << sep << prot << ' ' << (*itr)->fullName();
}

const CibCppObj* CibCppCompound::resolveTypeName(const std::string& typeName, const CppProgramEx& cppProgram) const
{
	TypeNameToCibCppObj::const_iterator itr          = typeNameToCibCppObj_.find(typeName);
	if(itr != typeNameToCibCppObj_.end())
		return itr->second;
	const CibCppObj*                    resolvedType = cppProgram.getCibCppObjFromTypeName(typeName, cppCompoundObj_);
	typeNameToCibCppObj_[typeName] = resolvedType;
	return resolvedType;
}

void CibCppCompound::emitDecl(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CibIndent indentation /* = CibIndent */)
{
	stm     << indentation;
	stm     << cppCompoundObj_->compoundType_;
	if(cppCompoundObj_->isNamespaceLike())
	{
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
			((CibCppCompound*) cppProgram.CibCppObjFromCppObj(mem))->emitDecl(stm, cppProgram, cibParams, indentation);
		}
		else if(mem->objType_ == CppObj::kFunction || mem->objType_ == CppObj::kConstructor || mem->objType_ == CppObj::kDestructor)
		{
			CibCppFunction* func = (CibCppFunction*) cppProgram.CibCppObjFromCppObj(mem);
			func->emitOrigDecl(stm, cppProgram, cibParams, indentation);
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
			stm << ++indentation << cppCompoundObj_->compoundType_ << ' ' << handleName(cibParams) << ";\n";
			stm << indentation << name() << '(' << handleName(cibParams) << "* h)";
			CibCppCompoundArray& pubParents          = parents_[kPublic];
			char baseClassCtorPrefix = ':';
			for(CibCppCompoundArray::const_iterator parentItr = pubParents.begin(); parentItr != pubParents.end(); ++parentItr)
			{
				const CibCppCompound* pubParent = *parentItr;
				stm << baseClassCtorPrefix << ' ' << pubParent->fullName() << "(0) ";
				baseClassCtorPrefix = ',';
			}
			stm << "{ __set(h); }\n";
			stm << indentation << handleName(cibParams) << "* " << cibParams.handleGetterMethod << "() const { return h_; }\n";
			stm << indentation << "static " << name() << "* " << cibParams.fromHandle << "(" << handleName(cibParams) << "* h);\n";
			stm << '\n' << --indentation << "protected :\n";
			++indentation;
			for(CibCppCompoundArray::const_iterator parentItr = pubParents.begin(); parentItr != pubParents.end(); ++parentItr)
			{
				const CibCppCompound* pubParent = *parentItr;
				stm << indentation << "static " << pubParent->fullHandleName(cibParams) << "* " << castToBaseName(pubParent, cibParams) << "(" << handleName(cibParams) << "* h);\n";
			}
			stm << indentation << "void __set(" << handleName(cibParams) << "* h);\n";
			// Now emit members that are required for glueing.
			stm << '\n' << --indentation << "private :\n";
			stm << ++indentation << handleName(cibParams) << "* h_;\n";
		}
		stm     << --indentation << "};\n";
	}
	else if(cppCompoundObj_->isNamespaceLike())
	{
		stm     << --indentation << "}\n";
	}

	if(outer_ && outer_->cppCompoundObj_->isCppFile())
	{
		emitDefn(stm, cppProgram, cibParams, indentation);
	}
}

void CibCppCompound::emitBridgeDecl(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CibIndent indentation /* = CibIndent */)
{
	for(CppObjArray::const_iterator memItr = cppCompoundObj_->members_.begin(); memItr != cppCompoundObj_->members_.end(); ++memItr)
	{
		CppObj* mem = *memItr;
		if(!inline_ && !isMemberPublic(mem->prot_, cppCompoundObj_->compoundType_))     // We will emit only public members unless class is inline.
			continue;
		if(mem->objType_ == CppObj::kFunction || mem->objType_ == CppObj::kConstructor || mem->objType_ == CppObj::kDestructor)
		{
			CibCppFunction* func = (CibCppFunction*) cppProgram.CibCppObjFromCppObj(mem);
			if(inline_)                                                             // If class is inline
			{
				if(func->isStatic() && !func->isInline())                       // only non-inline static methods need bridging.
					needsBridging_.push_back(func);
			}
			else if(mem->prot_ == kPublic)
			{
				needsBridging_.push_back(func);
			}
		}
	}
	if((cppCompoundObj_->isNamespaceLike()) == 0 || needsBridging_.empty())
		return;         // Nothing to do if it is not namespace/class/struct/union.
	stm     << '\n';        // Start in new line.
	stm     << indentation << "namespace _cib_ { namespace " << cibParams.moduleName << "Lib { namespace CppToC {\n";
	if(!wrappingNamespaceDeclarations().empty())
		stm  << ++indentation << wrappingNamespaceDeclarations() << '\n';
	stm     << ++indentation << "struct " << name() << " {\n";
	++indentation;
	for(size_t idxFunc = 0; idxFunc < needsBridging_.size(); ++idxFunc)
	{
		if(needsBridging_[idxFunc]->isPureVirtual())
			continue;
		needsBridging_[idxFunc]->emitProcType(stm, cppProgram, cibParams, indentation);
	}
	CibCppCompoundArray& pubParents = parents_[kPublic];
	for(CibCppCompoundArray::const_iterator parentItr = pubParents.begin(); parentItr != pubParents.end(); ++parentItr)
	{
		const CibCppCompound* pubParent = *parentItr;
		stm << indentation << "typedef "<< pubParent->fullHandleName(cibParams) << "* (__stdcall *" << castToBaseName(pubParent, cibParams) << "Proc) (" << fullHandleName(cibParams) << "* h);\n";
	}
	stm     << '\n'; // Start in new line.
	for(size_t idxFunc = 0; idxFunc < needsBridging_.size(); ++idxFunc)
	{
		CibCppFunction* func = needsBridging_[idxFunc];
		if(func->isPureVirtual())
			continue;
		stm << indentation << func->procType(cibParams) << ' ' << func->procName(cibParams) << ";\n";
	}
	for(CibCppCompoundArray::const_iterator parentItr = pubParents.begin(); parentItr != pubParents.end(); ++parentItr)
	{
		const CibCppCompound* pubParent = *parentItr;
		stm << indentation << castToBaseName(pubParent, cibParams) << "Proc " << castToBaseName(pubParent, cibParams) << ";\n";
	}
	stm     << '\n';        // Start in new line.
	stm     << indentation << "static const " << name() << "& instance() {\n";
	stm     << ++indentation << "static " << name() << " bridgeIns;\n";
	stm     << indentation << "return bridgeIns;\n";
	stm     << --indentation << "}\n";
	stm     << '\n';        // Start in new line.
	stm     << --indentation << "private:\n";
	stm     << ++indentation << name() << "();\n";
	stm     << --indentation << "};\n";
	if(!wrappingNamespaceDeclarations().empty())
		stm  << --indentation << closingBracesForWrappingNamespaces() << '\n';
	stm     << --indentation << "}}}\n";
}

void CibCppCompound::emitDefn(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CibIndent indentation /* = CibIndent */)
{
	for(CppObjArray::const_iterator memItr = cppCompoundObj_->members_.begin(); memItr != cppCompoundObj_->members_.end(); ++memItr)
	{
		CppObj* mem = *memItr;
		if(mem->objType_ == CppObj::kCompound)
			((CibCppCompound*) cppProgram.CibCppObjFromCppObj(mem))->emitDefn(stm, cppProgram, cibParams, indentation);
	}
	// First emit the CppToC class declaration.
	emitBridgeDecl(stm, cppProgram, cibParams, indentation);
	// Emit the implementation of class methods/constructors added as part of glue code.
	stm     << '\n'; // Start in new line.
	CibCppCompoundArray& pubParents = parents_[kPublic];
	for(CibCppCompoundArray::const_iterator parentItr = pubParents.begin(); parentItr != pubParents.end(); ++parentItr)
	{
		const CibCppCompound* pubParent = *parentItr;
		stm << indentation << "inline " << pubParent->fullHandleName(cibParams) << "* " << fullName() << "::" << castToBaseName(pubParent, cibParams) << '(' << fullHandleName(cibParams) << "* h) {\n";
		stm << ++indentation << "return _cib_::" << cibParams.moduleName << "Lib::" << bridgeName() << "::instance()." << castToBaseName(pubParent, cibParams) << "(h);\n";
		stm << --indentation << "}\n";
	}
	if(cppCompoundObj_->isClassLike())
	{
		stm     << '\n'; // Start in new line.
		stm     << indentation << "inline void " << fullName() << "::__set(" << fullHandleName(cibParams) << "* h) {\n";
		++indentation;
		for(CibCppCompoundArray::const_iterator parentItr = pubParents.begin(); parentItr != pubParents.end(); ++parentItr)
		{
			const CibCppCompound* pubParent = *parentItr;
			stm << indentation << pubParent->fullName() << "::" << "__set(" << castToBaseName(pubParent, cibParams) << "(h));\n";
		}
		stm     << indentation << "h_ = h;\n";
		stm     << --indentation << "}\n";
	}
	for(size_t idxFunc = 0; idxFunc < needsBridging_.size(); ++idxFunc)
	{
		CibCppFunction* func = needsBridging_[idxFunc];
		if(func->isPureVirtual())
			continue;
		stm     << '\n'; // Start in new line.
		stm     << indentation << "inline ";
		if(func->isFunction())
		{
			emitType(stm, func->func_->retType_, this, cppProgram, cibParams);
			stm << ' ';
		}
		stm     << fullName() << "::" << func->funcName() << '('; func->emitArgsForDecl(stm, cppProgram, cibParams); stm     << ")";
		if(func->isConst())
			stm << " const ";
		else if(func->isConstructor())
		{
			CibCppCompoundArray& pubParents          = parents_[kPublic];
			char baseClassCtorPrefix = ':';
			for(CibCppCompoundArray::const_iterator parentItr = pubParents.begin(); parentItr != pubParents.end(); ++parentItr)
			{
				const CibCppCompound* pubParent = *parentItr;
				stm << baseClassCtorPrefix << ' ' << pubParent->fullName() << "(0) ";
				baseClassCtorPrefix = ',';
			}
		}
		stm     << "{\n";
		stm     << ++indentation;
		CibCppCompound* retType = NULL;
		if(func->isConstructor())
			stm << "__set(";
		else if(func->isFunction() && func->func_->retType_ && !func->func_->retType_->isVoid())
		{
			stm << "return ";
			retType = (CibCppCompound*) resolveTypeName(func->func_->retType_->baseType_, cppProgram);
			if(retType)
			{
				stm << retType->fullName() << "::" << cibParams.fromHandle << "(\n";
				stm << ++indentation;
			}
		}
		stm     << "_cib_::" << cibParams.moduleName << "Lib::" << bridgeName() << "::instance()." << func->procName(cibParams) << "(";
		if(!func->isConstructor() && !func->isStatic())
		{
			stm << "h_";
			if(func->hasParams())
				stm << ", ";
		}
		func->emitArgsForCall(stm, cppProgram, cibParams, true);
		stm     << ')';
		if(func->isConstructor())
			stm << ')';
		else if(retType)
			stm << '\n' << --indentation << ")";
		stm     << ";\n";
		stm     << --indentation << "}\n";
	}
}

void CibCppCompound::emitLibGlueCode(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CibIndent indentation /* = CibIndent */)
{
	if(cppCompoundObj_->isCppFile())
	{
		stm     << "#include \"cib_" << cibParams.moduleName << "Lib.h\"\n";
		std::string incName = name();
		std::string::size_type sepPos  = incName.rfind('/');
		if(sepPos == incName.npos)
			sepPos = incName.rfind('\\');
		if(sepPos != incName.npos)
			incName = incName.substr(sepPos+1);
		stm     << indentation << "#include \"" << incName << "\"\n";
		stm     << '\n'; // Start in new line.
		stm     << indentation << "namespace _cib_ { namespace " << cibParams.moduleName << "Lib { namespace CtoCpp {\n";
		++indentation;
	}
	for(CppObjArray::const_iterator memItr = cppCompoundObj_->members_.begin(); memItr != cppCompoundObj_->members_.end(); ++memItr)
	{
		CppObj* mem = *memItr;
		if(mem->objType_ == CppObj::kCompound)
		{
			if(cppCompoundObj_->isNamespaceLike())
				stm << indentation++ << "namespace " << name() << " {\n";
			((CibCppCompound*) cppProgram.CibCppObjFromCppObj(mem))->emitLibGlueCode(stm, cppProgram, cibParams, indentation);
			if(cppCompoundObj_->isNamespaceLike())
				stm << --indentation << "}\n";
		}
	}
	if(cppCompoundObj_->isNamespaceLike() && !needsBridging_.empty())
	{
		stm     << indentation++ << "namespace " << name() << " {\n";
		for(size_t idxFunc = 0; idxFunc < needsBridging_.size(); ++idxFunc)
		{
			CibCppFunction* func = needsBridging_[idxFunc];
			if(func->isPureVirtual())
				continue;
			func->emitCAPIDefn(stm, cppProgram, cibParams, indentation);
			stm << '\n'; // Start in new line.
		}

		CibCppCompoundArray& pubParents = parents_[kPublic];
		for(CibCppCompoundArray::const_iterator parentItr = pubParents.begin(); parentItr != pubParents.end(); ++parentItr)
		{
			const CibCppCompound* pubParent = *parentItr;
			stm << indentation << "::" << pubParent->fullName() << "* __stdcall " << castToBaseName(pubParent, cibParams) << "(::" << fullName() << "* " << objName() << ") {\n";
			stm << ++indentation << "return " << objName() << ";\n";
			stm << --indentation << "}\n";
		}
		if(!pubParents.empty())
			stm << '\n';                                                                                                                                                                                                // Start in new line.
		if(!needsBridging_.empty())
		{
			stm     << indentation << "class MetaInterface" << " : public ::_cib_::" << cibParams.moduleName << "Lib::MetaInterface {\n";
			stm     << indentation << "protected:\n";
			stm     << ++indentation << "virtual void LoadMethods() {\n";
			++indentation;
			for(size_t idxFunc = 0; idxFunc < needsBridging_.size(); ++idxFunc)
			{
				CibCppFunction* func = needsBridging_[idxFunc];
				if(func->isPureVirtual())
					continue;
				stm << indentation << "AddMethod(" << func->cibId(cibParams) << ", (void*) " << func->capiName(cibParams) << ");\n";
			}

			for(CibCppCompoundArray::const_iterator parentItr = pubParents.begin(); parentItr != pubParents.end(); ++parentItr)
			{
				const CibCppCompound* pubParent = *parentItr;
				stm << indentation << "AddMethod(" << cibIdOfCastToBaseName(pubParent, cibParams) << ", (void*) " << castToBaseName(pubParent, cibParams) << ");\n";
			}
			stm     << --indentation << "}\n";
			stm     << --indentation << "};\n";
			stm     << indentation << "::_cib_::" << cibParams.moduleName << "Lib::MetaInterface* CreateMetaInterface() { return new MetaInterface(); }\n";
		}
		stm         << --indentation << "}\n";
	}
	if(cppCompoundObj_->isCppFile())
	{
		stm     << --indentation << "}}}\n";
	}
}

void CibCppCompound::emitUsrGlueCode(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CibIndent indentation /* = CibIndent */)
{
	if(cppCompoundObj_->isCppFile())
	{
		stm     << "#include \"cib_" << cibParams.moduleName << "Lib.h\"\n";
		std::string incName = name();
		std::string::size_type sepPos  = incName.rfind('/');
		if(sepPos == incName.npos)
			sepPos = incName.rfind('\\');
		if(sepPos != incName.npos)
			incName = incName.substr(sepPos+1);
		stm     << indentation << "#include \"" << incName << "\"\n";
		stm     << '\n';
		stm     << indentation << "namespace _cib_ { namespace " << cibParams.moduleName << "Lib {\n";
		++indentation;
	}
	for(CppObjArray::const_iterator memItr = cppCompoundObj_->members_.begin(); memItr != cppCompoundObj_->members_.end(); ++memItr)
	{
		CppObj* mem = *memItr;
		if(mem->objType_ == CppObj::kCompound)
			((CibCppCompound*) cppProgram.CibCppObjFromCppObj(mem))->emitUsrGlueCode(stm, cppProgram, cibParams, indentation);
	}

	if(cppCompoundObj_->isNamespaceLike() && !needsBridging_.empty())
	{
		stm     << indentation++ << bridgeName() << "::" << name() <<"() {\n";
		stm     << indentation << "_cib_::" << cibParams.moduleName << "Lib::MetaInterface metaIntrface(" << cibId(cibParams) << ");\n";
		for(size_t idxFunc = 0; idxFunc < needsBridging_.size(); ++idxFunc)
		{
			CibCppFunction* func = needsBridging_[idxFunc];
			if(func->isPureVirtual())
				continue;
			stm << indentation << func->procName(cibParams) << " = ("<< func->procType(cibParams) << ") metaIntrface.GetMethod(" << func->cibId(cibParams) << ");\n";
		}

		CibCppCompoundArray& pubParents = parents_[kPublic];
		for(CibCppCompoundArray::const_iterator parentItr = pubParents.begin(); parentItr != pubParents.end(); ++parentItr)
		{
			const CibCppCompound* pubParent = *parentItr;
			stm << indentation << castToBaseName(pubParent, cibParams) << " = (" << castToBaseName(pubParent, cibParams) << "Proc) metaIntrface.GetMethod(" << cibIdOfCastToBaseName(pubParent, cibParams) << ");\n";
		}
		stm     << --indentation << "}\n";
	}
	if(cppCompoundObj_->isCppFile())
	{
		stm     << --indentation << "}}\n";
	}
}

void CibCppCompound::emitMetaInterfaceFactoryDecl(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CibIndent indentation /* = CibIndent */)
{
	for(CppObjArray::const_iterator memItr = cppCompoundObj_->members_.begin(); memItr != cppCompoundObj_->members_.end(); ++memItr)
	{
		CppObj* mem = *memItr;
		if(mem->objType_ == CppObj::kCompound)
			((CibCppCompound*) cppProgram.CibCppObjFromCppObj(mem))->emitMetaInterfaceFactoryDecl(stm, cppProgram, cibParams, indentation);
	}
	if(cppCompoundObj_->isNamespaceLike() && !needsBridging_.empty())
	{
		stm << indentation << "namespace _cib_ { namespace " << cibParams.moduleName << "Lib { namespace CtoCpp {\n";
		stm << ++indentation << wrappingNamespaceDeclarations() << " namespace " << name() << " { ::_cib_::" << cibParams.moduleName << "Lib::MetaInterface* CreateMetaInterface(); }" << closingBracesForWrappingNamespaces() << '\n';;
		stm << --indentation << "}}}\n";
	}
}

void CibCppCompound::emitCodeToPopulateMetaInterfaceRepository(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CibIndent indentation /* = CibIndent */)
{
	for(CppObjArray::const_iterator memItr = cppCompoundObj_->members_.begin(); memItr != cppCompoundObj_->members_.end(); ++memItr)
	{
		CppObj* mem = *memItr;
		if(mem->objType_ == CppObj::kCompound)
			((CibCppCompound*) cppProgram.CibCppObjFromCppObj(mem))->emitCodeToPopulateMetaInterfaceRepository(stm, cppProgram, cibParams, indentation);
	}
	if(cppCompoundObj_->isNamespaceLike() && !needsBridging_.empty())
		stm << indentation << "gMetaInterfaceRepository[" << cibId(cibParams) << "] = _cib_::" << cibParams.moduleName << "Lib::CtoCpp" << wrappingNses() << "::" << name() << "::CreateMetaInterface();\n";
}
