#include "stdafx.h"
#include "Password.h"
#include "Sygnalization.h"


Password::Password()
{
	SetData();
}
Void Password::ChangePassword(Int32 UserPassword) {
	Data = UserPassword;
}
Boolean Password::CheckPassword(Int32 UserPassword) {
	if (UserPassword== Data) {
		return true;
}
	else return false;
}
Password::~Password() {

}
Void Password::SetData() {
	Data = Convert::ToInt32("56789");
}

