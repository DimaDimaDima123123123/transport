#pragma once
#include "water_transport.h"

class boat : public water_transport
{
    int seatingCapacity;
public:
    boat();
    boat(double speed, string surf, int seats);
    void Output();
};
