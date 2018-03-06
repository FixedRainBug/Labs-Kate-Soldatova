#include "stdafx.h"
#include "Door.h"


Door::Door()
{
	DoorClose = true;
}
Void Door::OpenDoor(Boolean^ SygnalActive) {
	if (Convert::ToBoolean(SygnalActive) == false) DoorClose = true;
	else DoorClose = false;
}
Boolean^ Door::CheckSygnal() {
	return Sygnal.GetActive();
}
Boolean^ Door::GetDoorClose() {
	return DoorClose;
}
Door::Door(const Door^ P) {
	DoorClose = P->DoorClose;
}