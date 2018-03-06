#include "stdafx.h"
#include "Lamp.h"


Lamp::Lamp()
{
	LampState = false;
}
Void Lamp::LampOn(Door^ DoorFunc) {
	if (Convert::ToBoolean(DoorFunc->GetDoorClose())) {}
	else LampState = true;
}
Void Lamp::LampOff(Door^ DoorFunc) {
	if (Convert::ToBoolean(DoorFunc->GetDoorClose())) {}
	else LampState = false;
}
Boolean Lamp::GetLampState() {
	return LampState;
}
