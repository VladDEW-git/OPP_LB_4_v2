#include "Device.h"

Device::Device()
	: sensor(), TS(), NumFix(0), date()
{

}

Device::Device(const char* unit, int diapas, int rval, TypeSensor ts, int num_fix, int num, int moth, int year)
	: sensor(unit, diapas, rval), TS(ts), NumFix(num_fix), date(num, moth, year)
{

}

Device::Device(Device& device)
	: sensor(device.sensor), TS(device.TS), NumFix(device.NumFix), date(device.date)
{

}

Device::~Device()
{

}

void Device::ShowDevise()
{
	std::cout << "Сенсор: ";
	sensor.ShowSensor();
	std::cout << "\n";
	std::cout << "Тип сенсору: " << TS << "\n" << "Номер кріплення: " << NumFix << "\n" << "Дата калібровки: ";
	date.ShowDate();
}

Sensor Device::GetSen()
{
	return sensor;
}

TypeSensor Device::GetTs()
{
	return TS;
}

int Device::GetNumFix()
{
	return NumFix;
}

Date Device::GetDate()
{
	return date;
}

void Device::SetSens(Sensor& sens)
{
	this->sensor = sens;
}

void Device::SetTs(TypeSensor& ts)
{
	this->TS = ts;
}

void Device::SetNumFix(int& numf)
{
	this->NumFix = numf;
}

void Device::SetDate(Date& dat)
{
	this->date = dat;
}
