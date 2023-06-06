#include "Device.h"

Device::Device()
	: sensor(), TS(Accelerometer), NumFix(0), date()
{
}

Device::Device(const char* unit, int diapas, int rval, TypeSensor ts, int num_fix, int num, int moth, int year)
	: sensor(unit, diapas, rval), TS(ts), NumFix(num_fix), date(num, moth, year)
{
}

Device::Device(const Device& device)
	: sensor(device.sensor), TS(device.TS), NumFix(device.NumFix), date(device.date)
{
}

Device::~Device()
{
}

void Device::ShowDevice()
{
	std::cout << "Сенсор: ";
	sensor.ShowSensor();
	std::cout << "\n";
	std::cout << "Тип сенсору: " << TS << "\n" << "Номер кріплення: " << NumFix << "\n" << "Дата калібровки: ";
	date.ShowDate();
}

Sensor Device::GetSensor()
{
	return sensor;
}

TypeSensor Device::GetTypeSensor()
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

void Device::SetSensor(const Sensor& sens)
{
	sensor = sens;
}

void Device::SetTypeSensor(const TypeSensor& ts)
{
	TS = ts;
}

void Device::SetNumFix(int numf)
{
	NumFix = numf;
}

void Device::SetDate(const Date& dat)
{
	date = dat;
}
