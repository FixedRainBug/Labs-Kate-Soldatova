#pragma once
#include "Door.h"
ref class Lamp
{
public:
	Lamp();
	Void LampOn(Door^ DoorFunc);
	Void LampOff(Door^ DoorFunc);
	Boolean GetLampState();
private:
	Boolean LampState;
};

