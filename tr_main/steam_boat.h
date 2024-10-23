#pragma once
#include "water_transport.h"

class steam_boat : public water_transport
{
    string type;
public:
    steam_boat();
    steam_boat(double speed, string surf, string boatType);
    void Output();
};
