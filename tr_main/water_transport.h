#pragma once
#include "transport.h"

class water_transport : public transport
{
protected:
    double maxSpeed;
public:
    water_transport();
    water_transport(double speed, string surf);
    void Output();
};