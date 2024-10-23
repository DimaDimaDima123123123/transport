#include "water_transport.h"
#include <iostream>
using namespace std;

water_transport::water_transport() : transport("water"), maxSpeed(0.0) {}
water_transport::water_transport(double speed, string surf) : transport(surf), maxSpeed(speed) {}

void water_transport::Output()
{
    transport::Output();
    cout << "Max Speed: " << maxSpeed << " knots\n";
}
