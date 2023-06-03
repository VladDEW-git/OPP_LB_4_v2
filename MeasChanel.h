#pragma once
#include "Device.h"
#include <iostream>

class Device;

class MeasChanel
{
private:

	static int chanel_value;
	int chanel_num = 0;
	Device* DeviceInfo = new Device[3];
public:

	// Constructor

	MeasChanel();
	MeasChanel(Device Dv1, Device Dv2, Device Dv3);
	MeasChanel(MeasChanel& MC);

	// Destructor

	~MeasChanel();

	// Show methods

	void ShowMC();
	void ShowMcShort();
};

extern int chanel_value;