#ifndef __CIB_H__
#define __CIB_H__

#include "cppdom.h"
#include "cppwriter.h"
#include "params.h"

#include <iostream>
#include <map>
#include <algorithm>

#include <assert.h>

//////////////////////////////////////////////////////////////////////////

class CppProgramEx;

typedef CppWriter::Indentation CibIndent;

class CibCppEnum;
class CibCppCompound;
class CibCppFunction;

typedef std::list<CppDocComment*> CibCppDocs;
class CibCppObj
{
public:
   CibCppObj() {}
   virtual ~CibCppObj() {}
};

typedef std::vector<CibCppCompound*>                    CibCppCompoundArray;
typedef std::vector<CibCppFunction*>                    CibCppFunctionArray;
typedef std::map<CppObjProtLevel, CibCppCompoundArray>  CibCppInheritInfo;
typedef std::list<std::string>                          stringlist;
typedef std::map<std::string, const CibCppObj*>         TypeNameToCibCppObj;

/**
 * Responsible for emitting code required for CIB functionality of C++ compound object.
 */
class CibCppCompound : public CibCppObj
{
public:
   CibCppInheritInfo    parents_;   // List of all parents from which this compound object is derived.
   CibCppInheritInfo    children_;  // List of all children which are derived from this compound object.

private:
   CppCompound*			cppCompoundObj_;
   CibCppCompound*      outer_;     // This will be NULL unless this class belongs to some other namespace/class/struct/union.
   bool                 inline_;    // true when all non-static methods are inline.
   bool					interfaceLike_;
   bool					facadeLike_;

   CibCppFunctionArray  needsBridging_; // Array of all functions that require bridging for implementation at client side.
   mutable TypeNameToCibCppObj  typeNameToCibCppObj_;

   friend class CibCppFunction;

   void emitBridgeDecl(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CibIndent indentation = CibIndent());

public:
   CibCppCompound(CppCompound* cppClassObj, CibCppCompound* outer = NULL)
       : cppCompoundObj_(cppClassObj)
       , outer_(outer)
       , inline_(false)
	   , interfaceLike_(false)
	   , facadeLike_(false)
   {
   }

   CppCompound* getCppCompound() const { return cppCompoundObj_; }
   /// @return name of this class.
   const std::string&   name() const {
	   return cppCompoundObj_->name_;
   }
   /// @return full name of this class.
   std::string   fullName() const {
	   if (outer_ && (outer_->cppCompoundObj_->isNamespaceLike()))
		   return outer_->fullName() + "::" + cppCompoundObj_->name_;
	   else
		   return cppCompoundObj_->name_;
   }
   /// @return Unique name of this class
   std::string   uniqName() const {
	   std::string uname = fullName();
	   std::replace(uname.begin(), uname.end(), ':', '_');
	   return uname;
   }
   /// @return name of handle class for this compound object.
   std::string   handleName(const CibParams& cibParams) const {
	   return cibParams.classHandlePrefix + cppCompoundObj_->name_;
   }
   /// @return full name of handle class for this compound object.
   std::string   fullHandleName(const CibParams& cibParams) const {
	   return "::" + fullName() + "::" + handleName(cibParams);
   }
   /// @return Name of variable for pointer of this compound object.
   std::string objName() const {
	   return "p" + cppCompoundObj_->name_ + "Obj";
   }
   /// @return Name of bridge class.
   std::string bridgeName() const {
	   return "CppToC::" + fullName();;
   }
   /// @return Name of function that casts to object of parent class
   std::string castToBaseName(const CibCppCompound* base, const CibParams& cibParams) const {
	   return cibParams.castToBasePrefix + base->uniqName();
   }
   /// @return CibId of function that casts to object of parent class
   std::string cibIdOfCastToBaseName(const CibCppCompound* base, const CibParams& cibParams) const {
	   return "::_cib_::" + cibParams.moduleName + "Lib" + wrappingNses() + "::" + name() + "::kCIBID_" + castToBaseName(base, cibParams);
   }
   /// @return string that represents a sequence of all wrapping namespaces
   std::string wrappingNamespaceDeclarations() const {
	   if (outer_ == NULL || outer_->cppCompoundObj_->isCppFile())
		   return "";
	   return outer_->wrappingNamespaceDeclarations() + "namespace " + outer_->name() + " {";
   }
   ///
   std::string wrappingNses() const {
	   if (outer_ == NULL || outer_->cppCompoundObj_->isCppFile())
		   return "::";
	   return outer_->wrappingNses() + outer_->name();
   }
   /// @return sequence of closing braces that closes all wrapping namespace definitions.
   std::string closingBracesForWrappingNamespaces() const {
	   if (outer_ == NULL || outer_->cppCompoundObj_->isCppFile())
		   return "";
	   return outer_->closingBracesForWrappingNamespaces() + '}';
   }
   /// @return CibId of this compound object
   std::string cibId(const CibParams& cibParams) const {
	   return "::_cib_::" + cibParams.moduleName + "Lib" + wrappingNses() + "::kCIBID_" + name();
   }
   ///@ return CibCppObj corresponding to name of a given type
   const CibCppObj* resolveTypeName(const std::string& typeName, const CppProgramEx& cppProgram) const;
   ///@ return The outer compound object (class/namespace/etc) that owns this one.
   const CibCppCompound* outer() const { return outer_; }
   /**
    * @ return true if this compound object is interface-like.
	* \note Any class that has a public virtual function and somewhere there exists at-least one
	* function that accepts pointer/reference of that class is an interface-like class.
    */
   bool isInterfaceLike() const { return interfaceLike_; }
   /**
    * @ return true if this compound object is facade-like.
	* \note Any class that has a public virtual function and somewhere there exists at-least one
	* function that returns pointer/reference of that class is a facade-like class.
    */
   bool isFacadeLike() const { return facadeLike_; }
   void setIsInline() { inline_ = true; }
   void emitDecl(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CibIndent indentation = CibIndent());
   void emitDefn(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CibIndent indentation = CibIndent());
   void emitLibGlueCode(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CibIndent indentation = CibIndent());
   void emitUsrGlueCode(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CibIndent indentation = CibIndent());
   void emitMetaInterfaceFactoryDecl(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CibIndent indentation = CibIndent());
   void emitCodeToPopulateMetaInterfaceRepository(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CibIndent indentation = CibIndent());

   // Internal: Ideally should have been private with class CppProgramEx as friend.
   void setInterfaceLike() { interfaceLike_ = true; }
   void setFacadeLike() { facadeLike_ = true; }
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

   CibCppCompound* getOwner() const { return owner_; }

   void addAttrib(unsigned int attr) {
      attr_ |= attr;
   }

   bool hasParams() const { return params_ && params_->size() > 0; }
   CppParamList* getParams() const { return params_; }
   CppFunction* getCppFunction() const { return (isConstructor() || isDestructor()) ? NULL : func_; }

   /// Name of function.
   const std::string& funcName() const {
	   if (isConstructor())
		   return ctor_->name_;
	   else if (isDestructor())
		   return dtor_->name_;
	   else
		   return func_->name_;
   }

   /// Name of raw C API corresponding to method of C++ class.
   std::string capiName(const CibParams& cibParams) const {
	   return procName(cibParams);
   }

   /// ProcType that is used by client side glue code to define function pointer variable.
   std::string procType(const CibParams& cibParams) const {
	   return procName(cibParams) + "Proc";
   }

   /// ProcName that is used to name the variable that holds the function pointer.
   std::string procName(const CibParams& cibParams) const {
	   std::string pname;
	   if (isCopyConstructor())
		   pname = cibParams.copyCtorCAPIPrefix;
	   else if (isConstructor())
		   pname = cibParams.ctorCAPIPrefix;
	   else if (isDestructor())
		   pname = cibParams.dtorCAPIPrefix;
	   else
		   pname = funcName();
	   pname += procNameSfx_;

	   return pname;
   }

   /// @return CibId of this compound object
   std::string cibId(const CibParams& cibParams) const {
	   std::string cId = "::_cib_::" + cibParams.moduleName + "Lib";
	   if (owner_)
		   cId += owner_->wrappingNses() + "::" + owner_->name();
	   cId += "::kCIBID_" + capiName(cibParams);
	   return cId;
   }

   /// Sets proc name suffix
   void setProcNameSuffix(const std::string& sfx) {
       procNameSfx_ = sfx;
   }
   /// Emits function arguments for function definition/declaration.
   void emitArgsForDecl(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, bool resolveTypes = false, bool emitHandle = false) const;
   /// Emits function arguments for function call.
   void emitArgsForCall(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, bool emitHandle = false) const;
   /// Emits declaration as originally defined/declared.
   void emitOrigDecl(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CibIndent indentation  = CibIndent()) const;
   /// Emits the raw C API definition corresponding to C++ method, meant for library side glue code.
   void emitCAPIDefn(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CibIndent indentation  = CibIndent()) const;
   /// Emits the ProcType definition for the C++ method, meant for client side glue code.
   void emitProcType(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CibIndent indentation  = CibIndent()) const;
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

#endif //__CIB_H__
