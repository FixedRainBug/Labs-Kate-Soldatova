#pragma once
#include "Sygnalization.h"
#include "Password.h"
ref class Door
{
public:
	Door();
	Door(const Door^ P);
	Void OpenDoor(Boolean^ SygnalState);
	Sygnalization Sygnal;
	Boolean^ CheckSygnal();
	Boolean^ GetDoorClose();
protected:
	Boolean DoorClose;
};

