#pragma once
#include "transport.h"
using namespace std;

class ground_transport : public transport
{
protected:
    double maxSpeed;
public:
    ground_transport();
    ground_transport(double speed, string surf);
    void Output();
};
