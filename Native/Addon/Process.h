////////////////////////////////////////////////////////////////////////////////
// -------------------------------------------------------------------------- //
//                                                                            //
//                       (C) 2010-2015 Robot Developers                       //
//                       See LICENSE for licensing info                       //
//                                                                            //
// -------------------------------------------------------------------------- //
////////////////////////////////////////////////////////////////////////////////

//----------------------------------------------------------------------------//
// Prefaces                                                                   //
//----------------------------------------------------------------------------//

#ifndef ADDON_PROCESS_H
#define ADDON_PROCESS_H

#include "Common.h"



//----------------------------------------------------------------------------//
// Classes                                                                    //
//----------------------------------------------------------------------------//

////////////////////////////////////////////////////////////////////////////////

class ProcessWrap : public ObjectWrap
{
private:
	 ProcessWrap					(void);
	~ProcessWrap					(void);

private:
	static void		 Open			(const FunctionCallbackInfo<Value>& args);
	static void		Close			(const FunctionCallbackInfo<Value>& args);

	static void		IsValid			(const FunctionCallbackInfo<Value>& args);
	static void		IsDebugged		(const FunctionCallbackInfo<Value>& args);

	static void		Exit			(const FunctionCallbackInfo<Value>& args);
	static void		Kill			(const FunctionCallbackInfo<Value>& args);
	static void		HasExited		(const FunctionCallbackInfo<Value>& args);

	static void		GetModules		(const FunctionCallbackInfo<Value>& args);
	static void		GetWindows		(const FunctionCallbackInfo<Value>& args);

	static void		GetList			(const FunctionCallbackInfo<Value>& args);
	static void		GetCurrent		(const FunctionCallbackInfo<Value>& args);
	static void		IsSys64Bit		(const FunctionCallbackInfo<Value>& args);

	static void		New				(const FunctionCallbackInfo<Value>& args);

public:
	static void		Initialize		(Handle<Object> exports);

public:
	Process mProcess;

	// Function which defines class creator
	static Persistent<Function> constructor;
};

#endif // ADDON_PROCESS_H
