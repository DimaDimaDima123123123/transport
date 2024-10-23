#pragma once
#include "transport.h"

class air_transport : public transport
{
protected:
    double maxSpeed;
public:
    air_transport();
    air_transport(double speed, string surf);
    void Output();
};