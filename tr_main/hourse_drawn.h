#pragma once
#include "ground_transport.h"

class hourse_drawn : public ground_transport
{
    string animalType;
public:
    hourse_drawn();
    hourse_drawn(double speed, string surf, string animal);
    void Output();
};
