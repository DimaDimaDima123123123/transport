#include "tanker.h"
#include <iostream>
using namespace std;

tanker::tanker() : water_transport(), fuelCapacity(0.0) {}
tanker::tanker(double speed, string surf, double capacity) : water_transport(speed, surf), fuelCapacity(capacity) {}

void tanker::Output()
{
    water_transport::Output();
    cout << "Fuel Capacity: " << fuelCapacity << " liters\n";
}
