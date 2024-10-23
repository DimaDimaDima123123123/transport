#pragma once
#include "air_transport.h"

class plane : public air_transport
{
    int numOfEngines;
public:
    plane();
    plane(double speed, string surf, int engines);
    void Output();
};
