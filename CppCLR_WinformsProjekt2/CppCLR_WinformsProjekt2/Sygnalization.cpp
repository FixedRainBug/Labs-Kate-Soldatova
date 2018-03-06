#pragma once 
#include "stdafx.h"
#include "Password.h"
#include "Sygnalization.h"

Void Sygnalization::ChangeState(Boolean change) {
	Active = change;
}
Boolean Sygnalization::SetState() {
	Active = true;
	return true;
}
Void Sygnalization::ChangePassword(Int32 UserPassword) {
	Data = UserPassword;
}
Boolean Sygnalization::GetActive() {
	return Active;
}