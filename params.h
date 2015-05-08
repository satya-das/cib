#ifndef __CIB_PARAMS_H__
#define __CIB_PARAMS_H__

#include <string>

//////////////////////////////////////////////////////////////////////////

/**
 * Parameter that contains values of CIB options.
 */
struct CibParams
{
public:
	std::string	 classHandlePrefix;
	std::string	 handleGetterMethod;
	std::string	 copyCtorCAPIPrefix;
	std::string	 ctorCAPIPrefix;
	std::string	 dtorCAPIPrefix;
	std::string	 castToBasePrefix;
	std::string  moduleName;
	std::string  fromHandle;
	const int    globalFuncCibClassId; // All global functions of all headers belong to only one MetaInterface.

public:
	CibParams()
		: classHandlePrefix			("_h_")
		, handleGetterMethod		("__handle")
		, copyCtorCAPIPrefix		("__copy")
		, ctorCAPIPrefix			("__new")
		, dtorCAPIPrefix			("__delete")
		, castToBasePrefix			("__cast_to_")
		, fromHandle				("__fromHandle")
		, globalFuncCibClassId		(1)
	{
	}
};

#endif //__CIB_PARAMS_H__
