#include "ground_transport.h"
#include <iostream>
using namespace std;

ground_transport::ground_transport() : transport("ground"), maxSpeed(0.0) {}
ground_transport::ground_transport(double speed, string surf) : transport(surf), maxSpeed(speed) {}

void ground_transport::Output()
{
    transport::Output();
    cout << "Max Speed: " << maxSpeed << " km/h\n";
}
