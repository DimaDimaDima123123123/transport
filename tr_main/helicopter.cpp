#include "helicopter.h"
#include <iostream>
using namespace std;

helicopter::helicopter() : air_transport(), helicopterType("unknown") {}
helicopter::helicopter(double speed, string surf, string type) : air_transport(speed, surf), helicopterType(type) {}

void helicopter::Output()
{
    air_transport::Output();
    cout << "Helicopter type: " << helicopterType << endl;
}
