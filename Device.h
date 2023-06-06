#pragma once
#include "Sensor.h"
#include "Date.h"
#include <iostream>

enum TypeSensor
{
	Accelerometer = 1, Proximeter, Temperature
};

class Device
{
private:
	Sensor sensor;
	TypeSensor TS;
	int NumFix;
	Date date;

public:
	Device();
	Device(const char* unit, int diapas, int rval, TypeSensor ts, int num_fix, int num, int moth, int year);
	Device(const Device& device);
	~Device();

	void ShowDevice();

	Sensor GetSensor();
	TypeSensor GetTypeSensor();
	int GetNumFix();
	Date GetDate();

	void SetSensor(const Sensor& sens);
	void SetTypeSensor(const TypeSensor& ts);
	void SetNumFix(int numf);
	void SetDate(const Date& dat);
};


