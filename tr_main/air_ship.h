#pragma once
#include "air_transport.h"

class air_ship : public air_transport
{
    double gasVolume; 
public:
    air_ship();
    air_ship(double speed, string surf, double volume);
    void Output();
};
