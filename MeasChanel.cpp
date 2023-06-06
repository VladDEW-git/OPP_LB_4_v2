#include "MeasChanel.h"

int MeasChanel::chanel_value = 0;

MeasChanel::MeasChanel()
    : chanel_num(chanel_value + 1)
{
}

MeasChanel::MeasChanel(Device Dv1, Device Dv2, Device Dv3)
    : chanel_num(chanel_value + 1)
{
    DeviceInfo[0] = Dv1;
    DeviceInfo[1] = Dv2;
    DeviceInfo[2] = Dv3;
}

MeasChanel::MeasChanel(const MeasChanel& MC)
    : chanel_num(MC.chanel_num)
{
    DeviceInfo[0] = MC.DeviceInfo[0];
    DeviceInfo[1] = MC.DeviceInfo[1];
    DeviceInfo[2] = MC.DeviceInfo[2];
}

MeasChanel::~MeasChanel()
{
}

void MeasChanel::ShowMC()
{
    std::cout << "Number: " << chanel_num << ", ";
    for (int i = 0; i < 3; i++)
    {
        DeviceInfo[i].ShowDevice();
        std::cout << "\n\n";
    }
}

void MeasChanel::ShowMcShort()
{
    std::cout << "Class name: MeasChanel" << ", Object number: " << chanel_num << std::endl;
}

