#include "Sensor.h"

Sensor::Sensor()
	: unit(0), diapason(0), real_value(0)
{

}

Sensor::Sensor(const char* unit, int diapason, int real_value)
	: diapason(diapason), real_value(real_value)
{
	this->unit = new char[strlen(unit) + 1];
	strcpy(this->unit, unit);
}

Sensor::Sensor(Sensor& sensor)
	: diapason(sensor.diapason), real_value(sensor.real_value)
{
	if (sensor.unit != nullptr)
	{
		delete[] unit;
		unit = new char[strlen(sensor.unit) + 1];
		strcpy(unit, sensor.unit);
	}
}

char* Sensor::GetUnit()
{
	return unit;
}

int Sensor::GetDiapason()
{
	return diapason;
}

int Sensor::GetReal_value()
{
	return real_value;
}

Sensor::~Sensor()
{

}

void Sensor::ShowSensor()
{
	std::cout << "Одиниця вимірювання: " << unit << ", " << "Діапазон вимірявання: " << diapason << ", "
		<< "Поточне значення фізичної величини" << real_value << std::endl;
}

void Sensor::SetUnit(const char* unit)
{
	if (unit != nullptr)
	{
		delete[] this->unit;

		this->unit = new char[strlen(unit) + 1];
		strcpy(this->unit, unit);
	}
	
}

void Sensor::SetDiapason(int& diapason)
{
	this->diapason = diapason;
}

void Sensor::SetReal_value(int& real_value)
{
	this->real_value = real_value;
}
