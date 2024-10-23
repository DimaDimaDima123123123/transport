#pragma once
#include "air_transport.h"

class helicopter : public air_transport
{
    string helicopterType;
public:
    helicopter();
    helicopter(double speed, string surf, string type);
    void Output();
};