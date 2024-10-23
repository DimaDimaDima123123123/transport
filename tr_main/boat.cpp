#include "boat.h"
#include <iostream>
using namespace std;

boat::boat() : water_transport(), seatingCapacity(0) {}
boat::boat(double speed, string surf, int seats) : water_transport(speed, surf), seatingCapacity(seats) {}

void boat::Output()
{
    water_transport::Output();
    cout << "Seating capacity: " << seatingCapacity << " passengers\n";
}
