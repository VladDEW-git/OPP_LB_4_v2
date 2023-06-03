#pragma once
#include <iostream>
#include <cstring>
#include "Sensor.h"
#include "DATE.h"

class DATE;
//class Sensor;

class Device
{
private:

	Sensor sensor;
	TypeSensor TS;
	int NumFix;
	DATE date;
public:

	// Constructors

	Device();
	Device(const char* unit, int diapas, int rval, TypeSensor ts, int num_fix, int num, int moth, int year);
	Device(Device& device);

	// Destructor

	~Device();

	// Show methods

	void ShowDevise();

	// Get methods

	Sensor GetSen();
	TypeSensor GetTs();
	int GetNumFix();
	DATE GetDate();

	// Set methods

	void SetSens(Sensor& sens);
	void SetTs(TypeSensor& ts);
	void SetNumFix(int& numf);
	void SetDate(DATE& dat);

	//friend class DATE;
};

