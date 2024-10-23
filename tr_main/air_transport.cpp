#include "air_transport.h"
#include <iostream>
using namespace std;

air_transport::air_transport() : transport("air"), maxSpeed(0.0) {}
air_transport::air_transport(double speed, string surf) : transport(surf), maxSpeed(speed) {}

void air_transport::Output()
{
    transport::Output();
    cout << "Max Speed: " << maxSpeed << " km/h\n";
}
