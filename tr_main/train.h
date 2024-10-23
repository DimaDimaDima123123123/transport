#pragma once
#include "ground_transport.h"

class train : public ground_transport
{
    int numOfCarriages;
public:
    train();
    train(double speed, string surf, int carriages);
    void Output();
};