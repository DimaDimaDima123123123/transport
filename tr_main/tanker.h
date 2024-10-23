#pragma once
#include "water_transport.h"

class tanker : public water_transport
{
    double fuelCapacity;
public:
    tanker();
    tanker(double speed, string surf, double capacity);
    void Output();
};