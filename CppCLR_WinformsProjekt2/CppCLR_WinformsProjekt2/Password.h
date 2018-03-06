#pragma once
using namespace System;
ref class Password
{
public:
     Password();
	~Password();
	Void SetData();
	Void ChangePassword(Int32 UserPassword);
	Boolean CheckPassword(Int32 UserPassword);
protected:
	Int32 Data;
};



