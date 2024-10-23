#pragma once
#include "ground_transport.h"
using namespace std;

class car : public ground_transport
{
    string brand; // марка авто
public:
    car();
    car(double speed, string surf, string carBrand);
    void Output();
};
