#pragma once
#include <iostream>
#include <cstring>

class Sensor
{
private:
    char* unit;
    int diapason;
    int real_value;

public:
    Sensor();
    Sensor(const char* unit, int diapason, int real_value);
    Sensor(const Sensor& sensor);
    ~Sensor();

    char* GetUnit() const;
    int GetDiapason() const;
    int GetRealValue() const;

    void ShowSensor() const;

    void SetUnit(const char* unit);
    void SetDiapason(int diapason);
    void SetRealValue(int real_value);

    Sensor& operator=(const Sensor& sensor); // Оператор присваивания
};

