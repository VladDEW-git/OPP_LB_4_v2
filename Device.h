#pragma once
#include <iostream>
#include <cstring>
#include "Sensor.h"
#include "Date.h"

enum TypeSensor
{
	Accelerometer = 1, proximeter, temperature
};
//class Sensor;

class Device
{
private:

	Sensor sensor;
	TypeSensor TS;
	int NumFix;
	Date date;
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
	Date GetDate();

	// Set methods

	void SetSens(Sensor& sens);
	void SetTs(TypeSensor& ts);
	void SetNumFix(int& numf);
	void SetDate(Date& dat);

	//friend class DATE;
};

