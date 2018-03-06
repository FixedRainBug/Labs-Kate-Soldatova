#pragma once
#include "Password.h"

ref class Sygnalization : Password
{
public:
	Sygnalization() {
		Boolean SetState();
	}
	Void ChangeState(Boolean change);
	Boolean SetState();
	Boolean GetActive();
	Void Sygnalization::ChangePassword(Int32 UserPassword);
protected:
	Boolean Active;
};

