#ifndef __CPPAPI_H__
#define __CPPAPI_H__

#include "cppdom.h"
#include "cppwriter.h"

#include <iostream>
#include <map>
#include <algorithm>

#include <assert.h>

//////////////////////////////////////////////////////////////////////////

/**
 * Parameter that contains variables for cppapi.
 */
struct CibParams
{
public:
    std::string     classHandlePrefix;
    std::string     handleGetterMethod;
    std::string     copyCtorCAPIPrefix;
    std::string     ctorCAPIPrefix;
    std::string     dtorCAPIPrefix;
    std::string     castToBasePrefix;
    const int       globalFuncCibClassId; // All global functions of all headers belong to only one MetaInterface.
	std::string     moduleName;

    static CibParams& instance() { static CibParams singleton; return singleton; }

private:
    CibParams()
        :classHandlePrefix          ("_h_")
        ,handleGetterMethod         ("__handle")
        ,copyCtorCAPIPrefix         ("__copy")
        ,ctorCAPIPrefix             ("__new")
        ,dtorCAPIPrefix             ("__delete")
        ,castToBasePrefix           ("__cast_to_")
        ,globalFuncCibClassId      (1)
    {
    }
};

static CibParams& gParams = CibParams::instance();

typedef CppWriter::Indentation CibIndent;

class CibCppEnum;
class CibCppCompound;
class CibCppFunction;

typedef std::list<CppDocComment*> CibCppDocs;
class CibCppObj
{
public:
   CibCppObj() {}
};

typedef std::vector<CibCppCompound*>                    CibCppCompoundArray;
typedef std::vector<CibCppFunction*>                    CibCppFunctionArray;
typedef std::map<CppObjProtLevel, CibCppCompoundArray>  CibCppInheritInfo;
typedef std::list<std::string>                          stringlist;
typedef std::map<std::string, const CibCppObj*>         TypeNameToCibCppObj;

class CibCppCompound : public CibCppObj
{
public:
   CibCppInheritInfo    parents_;   // List of all parents from which this compound object is derived.
   CibCppInheritInfo    children_;  // List of all children which are derived from this compound object.
private:
   CppCompound*			cppCompoundObj_;
   CibCppCompound*      outer_;     // This will be NULL unless this class belongs to some other namespace/class/struct/union.
   mutable std::string  fullName_;  // Full name of this compound object.
   mutable std::string  handleName_;// Name of opaque class.
   mutable std::string  fullHandleName_; // Full name of opaque class.
   mutable std::string  objName_;   // Name of variable that holds pointer to object of this compound type.
   mutable std::string  bridgeName_;// Name of bridge class.
   mutable std::string  uniqName_;  // Unique name of class.
   mutable std::string  wrappingNsDecl_; // Sequence of namespace declaration of all namespaces that wrap this one.
   mutable std::string  wrappingNses_; // Sequence of all wrapping namespaces separated by ::
   mutable std::string  closingNsBraces_; // Sequence of braces to close all wrapping namespaces.
   mutable std::string	cibIdBase_;
   mutable bool         wrappingNsCalculated_;
   bool                 inline_;    // true when all non-static methods are inline.
   CibCppFunctionArray  needsBridging_; // Array of all functions that require bridging for implementation at client side.
   mutable TypeNameToCibCppObj  typeNameToCibCppObj_;

   friend class CibCppFunction;

   void calcFullName() const {
      if(outer_ && (outer_->cppCompoundObj_->isNamespace())) fullName_ = outer_->fullName() + "::" + cppCompoundObj_->name_;
      else fullName_ = cppCompoundObj_->name_;
   }
   void calcUniqName() const {
       uniqName_ = fullName();
       std::replace(uniqName_.begin(), uniqName_.end(), ':', '_');
   }
   void calcHandleName() const { handleName_ = CibParams::instance().classHandlePrefix + cppCompoundObj_->name_; }
   void calcFullHandleName() const { fullHandleName_ = "::" + fullName() + "::" + handleName(); }
   void calcObjName () const { objName_ = "p" + cppCompoundObj_->name_ + "Obj"; }
   void calcBridgeName() const { bridgeName_ = "CppToC::" + fullName(); }
   void calcWrappingNamespaceSeq() const;
   void calcCibIdBase() const { cibIdBase_ = "::_cib_::" + gParams.moduleName + "Lib" + wrappingNses(); }

   void emitBridgeDecl(std::ostream& stm, CibIndent indentation = CibIndent());

public:
   CibCppCompound(CppCompound* cppClassObj, CibCppCompound* outer = NULL)
       : cppCompoundObj_(cppClassObj)
       , outer_(outer)
       , inline_(false)
       , wrappingNsCalculated_(false)
   {
   }
   /// @return name of this class.
   const std::string&   name() const {
      return cppCompoundObj_->name_;
   }
   /// @return full name of this class.
   const std::string&   fullName() const {
      if(fullName_.empty()) calcFullName();
      return fullName_;
   }
   /// @return Unique name of this class
   const std::string&   uniqName() const {
       if(uniqName_.empty()) calcUniqName();
       return uniqName_;
   }
   /// @return name of handle class for this compound object.
   const std::string&   handleName() const {
       if(handleName_.empty()) calcHandleName();
       return handleName_;
   }
   /// @return full name of handle class for this compound object.
   const std::string&   fullHandleName() const {
       if(fullHandleName_.empty()) calcFullHandleName();
       return fullHandleName_;
   }
   /// @return Name of variable for pointer of this compound object.
   const std::string& objName() const {
       if(objName_.empty()) calcObjName();
       return objName_;
   }
   /// @return Name of bridge class.
   const std::string& bridgeName() const {
       if(bridgeName_.empty()) calcBridgeName();
       return bridgeName_;
   }
   /// @return Name of function that casts to object of parent class
   std::string castToBaseName(const CibCppCompound* base) const {
       return CibParams::instance().castToBasePrefix + base->uniqName();
   }
   /// @return CibId of function that casts to object of parent class
   std::string cibIdOfCastToBaseName(const CibCppCompound* base) const {
	   if(cibIdBase_.empty())
		   calcCibIdBase();
	   return cibIdBase_ + "::" + name() + "::kCIBID_" + castToBaseName(base);
   }
   /// @return string that represents a sequence of all wrapping namespaces
   const std::string& wrappingNamespaceDeclarations() const {
      if(!wrappingNsCalculated_) calcWrappingNamespaceSeq();
      return wrappingNsDecl_;
   }
   ///
   const std::string& wrappingNses() const {
      if(!wrappingNsCalculated_) calcWrappingNamespaceSeq();
      return wrappingNses_;
   }
   /// @return sequence of closing braces that closes all wrapping namespace definitions.
   const std::string& closingBracesForWrappingNamespaces() const {
      return closingNsBraces_;
   }
   /// @return CibId of this compound object
   std::string cibId() const {
	   if(cibIdBase_.empty())
		   calcCibIdBase();
	   return cibIdBase_ + "::kCIBID_" + name();
   }
   ///@ return CibCppObj corresponding to name of a given type
   const CibCppObj* resolveTypeName(const std::string& typeName) const;
   ///@ return The outer compound object (class/namespace/etc) that owns this one.
   const CibCppCompound* outer() const { return outer_; }

   void setIsInline() { inline_ = true; }
   void emitDecl(std::ostream& stm, CibIndent indentation = CibIndent());
   void emitDefn(std::ostream& stm, CibIndent indentation = CibIndent());
   void emitLibGlueCode(std::ostream& stm, CibIndent indentation = CibIndent());
   void emitUsrGlueCode(std::ostream& stm, CibIndent indentation = CibIndent());
   void emitMetaInterfaceFactoryDecl(std::ostream& stm, CibIndent indentation = CibIndent());
   void emitCodeToPopulateMetaInterfaceRepository(std::ostream& stm, CibIndent indentation = CibIndent());
};

/**
 * Represents a C++ function.
 * It can be a global function, a namespace member or a method of a class/struct/union.
 */
class CibCppFunction : public CibCppObj
{
private:
   union {
   CppFunction*			func_;
   CppConstructor*		ctor_;
   CppDestructor*		dtor_;
   };
   CibCppCompound*      owner_;    // Class of which this function is a member
   mutable std::string  capiName_; // Name of C API function corresponding to this CibCppFunction object.
   mutable std::string  procType_; // ProcType is name of function-pointer-type defined using typedef for the raw C API corresponding to the C++ function.
   mutable std::string  procName_; // Name of variable that holds the function pointer.
   mutable std::string	cibId_;
   std::string          procNameSfx_; // Suffix to be used for proc name. It is needed to make overloaded methods have different proc name.
   unsigned int			attr_; // e.g.: const, static, virtual, inline, etc.
   CppParamList*		params_;

   friend class CibCppCompound;
   /**
    * Attribute of function.
    * \note This is in addition of CppIdentifierAttrib defined in cppdom.
    */
   enum Type {
      kUnknown          = 0x00000,
      kConstructor      = 0x10000,
      kCopyConstructor  = 0x20000 | kConstructor,
      kDestructor       = 0x40000,
      kVirualDestructor = kDestructor | kVirtual,
      kPureVirtualDtor  = kDestructor | kPureVirtual
   };

   void calcCAPIName() const;
   void calcProcType() const { if(!procType_.empty()) return; procType_ = procName() + "Proc"; }
   void calcProcName() const;
   void calcCibId() const {
	   cibId_ = "::_cib_::" + gParams.moduleName + "Lib";
	   if(owner_)
		   cibId_ += owner_->wrappingNses() + "::" + owner_->name();
	   cibId_ += "::kCIBID_" + capiName();
   }

public:

   CibCppFunction(CppFunction* func, CibCppCompound* owner);
   CibCppFunction(CppConstructor* ctor, CibCppCompound* owner);
   CibCppFunction(CppDestructor* dtor, CibCppCompound* owner);

   bool isConstructor      () const { return (attr_ & kConstructor     ) == kConstructor     ; }
   bool isCopyConstructor  () const { return (attr_ & kCopyConstructor ) == kCopyConstructor ; }
   bool isDestructor       () const { return (attr_ & kDestructor      ) == kDestructor      ; }
   bool isStatic           () const { return (attr_ & kStatic          ) == kStatic          ; }
   bool isInline           () const { return (attr_ & kInline          ) == kInline          ; }
   bool isVirtual          () const { return (attr_ & kVirtual         ) == kVirtual         ; }
   bool isPureVirtual      () const { return (attr_ & kPureVirtual     ) == kPureVirtual     ; }
   bool isConst            () const { return (attr_ & kConst		   ) == kConst			 ; }
   bool isMethod           () const { return owner_ && !(isConstructor() || isDestructor()) && owner_->cppCompoundObj_->isClass(); }
   bool isFunction         () const { return !(isConstructor() || isDestructor()); }

   void addAttrib(unsigned int attr) {
      attr_ |= attr;
   }

   bool hasParams() const { return params_ && params_->size() > 0; }

   /// Name of function.
   const std::string& funcName() const {
      if(isConstructor())
		  return ctor_->name_;
	  else if(isDestructor())
		  return dtor_->name_;
	  else
		  return func_->name_;
   }

   /// Name of raw C API corresponding to method of C++ class.
   const std::string& capiName() const {
      if(capiName_.empty()) calcCAPIName();
      return capiName_;
   }

   /// ProcType that is used by client side glue code to define function pointer variable.
   const std::string& procType() const {
      if(procType_.empty()) calcProcType();
      return procType_;
   }
   
   /// ProcName that is used to name the variable that holds the function pointer.
   const std::string& procName() const {
      if(procName_.empty()) calcProcName();
      return procName_;
   }

   /// @return CibId of this compound object
   const std::string& cibId() const {
	   if(cibId_.empty())
		   calcCibId();
	   return cibId_;
   }

   /// Sets proc name suffix
   void setProcNameSuffix(const std::string& sfx) {
       procNameSfx_ = sfx;
   }
   /// Emits function arguments for function definition/declaration.
   void emitArgsForDecl(std::ostream& stm, bool resolveTypes = false, bool emitHandle = false) const;
   /// Emits function arguments for function call.
   void emitArgsForCall(std::ostream& stm, bool emitHandle = false) const;
   /// Emits declaration as originally defined/declared.
   void emitOrigDecl(std::ostream& stm, CibIndent indentation  = CibIndent()) const;
   /// Emits the raw C API definition corresponding to C++ method, meant for library side glue code.
   void emitCAPIDefn(std::ostream& stm, CibIndent indentation  = CibIndent()) const;
   /// Emits the ProcType definition for the C++ method, meant for client side glue code.
   void emitProcType(std::ostream& stm, CibIndent indentation  = CibIndent()) const;
};

//////////////////////////////////////////////////////////////////////////
// Other utility methods

/**
 * Finds if the member can be considered as public.
 * @param protLevel Known protection level
 * @param ownerType Owner type which owns the member.
 */
inline bool isMemberPublic(CppObjProtLevel protLevel, CppCompoundType ownerType)
{
	return protLevel == kPublic || (protLevel == kUnknownProt && defaultMemberProtLevel(ownerType) == kPublic);
}

#endif //__CPPAPI_H__
