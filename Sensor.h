#pragma once
#include <iostream>
#include <cstring>

//class Device;

enum TypeSensor : int
{
	Accelerometer = 1, proximeter, temperature
};

class Sensor
{
private:

	char* unit;
	int diapason;
	int real_value;
public:

	// Constructors
	Sensor();
	Sensor(const char* unit, int diapason, int real_value);
	Sensor(Sensor& sensor);

	// Get methods

	char* GetUnit();
	int GetDiapason();
	int GetReal_value();

	// Destructor

	~Sensor();

	// Show methods

	void ShowSensor();

	// SetMethods

	void SetUnit(const char* unit);
	void SetDiapason(int& diapason);
	void SetReal_value(int& real_value);
};

