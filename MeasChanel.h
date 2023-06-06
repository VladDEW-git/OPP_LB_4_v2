#pragma once
#include "Device.h"
#include <iostream>

class MeasChanel
{
private:
    static int chanel_value;
    int chanel_num;
    Device DeviceInfo[3];

public:
    MeasChanel();
    MeasChanel(Device Dv1, Device Dv2, Device Dv3);
    MeasChanel(const MeasChanel& MC);
    ~MeasChanel();

    void ShowMC();
    void ShowMcShort();
};
