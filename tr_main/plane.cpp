#include "plane.h"
#include <iostream>
using namespace std;

plane::plane() : air_transport(), numOfEngines(0) {}
plane::plane(double speed, string surf, int engines) : air_transport(speed, surf), numOfEngines(engines) {}

void plane::Output()
{
    air_transport::Output();
    cout << "Number of engines: " << numOfEngines << endl;
}
