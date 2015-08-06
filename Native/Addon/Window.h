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

#ifndef ADDON_WINDOW_H
#define ADDON_WINDOW_H

#include "Common.h"



//----------------------------------------------------------------------------//
// Classes                                                                    //
//----------------------------------------------------------------------------//

////////////////////////////////////////////////////////////////////////////////

class WindowWrap : public ObjectWrap
{
private:
	 WindowWrap						(void);
	~WindowWrap						(void);

private:
	static void		IsValid			(const FunctionCallbackInfo<Value>& args);
	static void		Close			(const FunctionCallbackInfo<Value>& args);

	static void		IsTopMost		(const FunctionCallbackInfo<Value>& args);
	static void		IsBorderless	(const FunctionCallbackInfo<Value>& args);
	static void		IsMinimized		(const FunctionCallbackInfo<Value>& args);
	static void		IsMaximized		(const FunctionCallbackInfo<Value>& args);

	static void		SetTopMost		(const FunctionCallbackInfo<Value>& args);
	static void		SetBorderless	(const FunctionCallbackInfo<Value>& args);
	static void		SetMinimized	(const FunctionCallbackInfo<Value>& args);
	static void		SetMaximized	(const FunctionCallbackInfo<Value>& args);

	static void		GetProcess		(const FunctionCallbackInfo<Value>& args);
	static void		GetPID			(const FunctionCallbackInfo<Value>& args);
	static void		SetHandle		(const FunctionCallbackInfo<Value>& args);

	static void		GetTitle		(const FunctionCallbackInfo<Value>& args);
	static void		SetTitle		(const FunctionCallbackInfo<Value>& args);

	static void		GetBounds		(const FunctionCallbackInfo<Value>& args);
	static void		SetBounds		(const FunctionCallbackInfo<Value>& args);
	static void		GetClient		(const FunctionCallbackInfo<Value>& args);
	static void		SetClient		(const FunctionCallbackInfo<Value>& args);
	static void		MapToClient		(const FunctionCallbackInfo<Value>& args);
	static void		MapToScreen		(const FunctionCallbackInfo<Value>& args);

	static void		GetList			(const FunctionCallbackInfo<Value>& args);
	static void		GetActive		(const FunctionCallbackInfo<Value>& args);
	static void		SetActive		(const FunctionCallbackInfo<Value>& args);
	static void		IsAxEnabled		(const FunctionCallbackInfo<Value>& args);

	static void		New				(const FunctionCallbackInfo<Value>& args);

public:
	static void		Initialize		(Handle<Object> exports);

public:
	Window mWindow;

	// Function which defines class creator
	static Persistent<Function> constructor;
};

#endif // ADDON_WINDOW_H
