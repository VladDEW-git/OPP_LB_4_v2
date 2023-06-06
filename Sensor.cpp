#include "Sensor.h"

Sensor::Sensor()
    : unit(nullptr), diapason(0), real_value(0)
{
}

Sensor::Sensor(const char* unit, int diapason, int real_value)
    : diapason(diapason), real_value(real_value)
{
    this->unit = new char[strlen(unit) + 1];
    strcpy(this->unit, unit);
}

Sensor::Sensor(const Sensor& sensor)
    : diapason(sensor.diapason), real_value(sensor.real_value)
{
    if (sensor.unit != nullptr)
    {
        unit = new char[strlen(sensor.unit) + 1];
        strcpy(unit, sensor.unit);
    }
    else
    {
        unit = nullptr;
    }
}

Sensor::~Sensor()
{
    delete[] unit;
}

char* Sensor::GetUnit() const
{
    return unit;
}

int Sensor::GetDiapason() const
{
    return diapason;
}

int Sensor::GetRealValue() const
{
    return real_value;
}

void Sensor::ShowSensor() const
{
    std::cout << "Одиниця вимірювання: " << unit << ", "
        << "Діапазон вимірявання: " << diapason << ", "
        << "Поточне значення фізичної величини: " << real_value << std::endl;
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

void Sensor::SetDiapason(int diapason)
{
    this->diapason = diapason;
}

void Sensor::SetRealValue(int real_value)
{
    this->real_value = real_value;
}

Sensor& Sensor::operator=(const Sensor& sensor)
{
    if (this == &sensor)
        return *this;

    delete[] unit;

    diapason = sensor.diapason;
    real_value = sensor.real_value;

    if (sensor.unit != nullptr)
    {
        unit = new char[strlen(sensor.unit) + 1];
        strcpy(unit, sensor.unit);
    }
    else
    {
        unit = nullptr;
    }

    return *this;
}
