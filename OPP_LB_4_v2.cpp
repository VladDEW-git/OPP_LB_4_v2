#include <iostream>
#include <cstring>
#include <Windows.h>
#include "Sensor.h"
#include "Date.h"
#include "Device.h"
#include "MeasChanel.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	TypeSensor Ts1{ Accelerometer };
	TypeSensor Ts2{ proximeter };
	TypeSensor Ts3{ temperature };

	//DATE date1(22, 05, 2023);
	//DATE date2(17, 03, 2023);
	//DATE date3(22, 07, 2022);

	//Sensor sens1("Тип1", 300, 6);
	//Sensor sens2("Тип2", 100, 20);
	//Sensor sens3("Тип3", 550, 38);

	Device dv1("Тип1", 300, 44, Ts2, 4, 4, 06, 2023);
	Device dv2("Тип2", 100, 50, Ts3, 1, 7, 11, 2022);
	Device dv3("Тип3", 550, 122, Ts1, 2, 18, 03, 2023);

	MeasChanel MC1(dv1, dv2, dv3);
	MC1.ShowMC();
	MC1.ShowMcShort();
}
