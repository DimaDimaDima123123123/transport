#include "air_ship.h"
#include <iostream>
using namespace std;

air_ship::air_ship() : air_transport(), gasVolume(0.0) {}
air_ship::air_ship(double speed, string surf, double volume) : air_transport(speed, surf), gasVolume(volume) {}

void air_ship::Output()
{
    air_transport::Output();
    cout << "Gas volume: " << gasVolume << " cubic meters\n";
}
