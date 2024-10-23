#include "steam_boat.h"
#include <iostream>
using namespace std;

steam_boat::steam_boat() : water_transport(), type("unknown") {}
steam_boat::steam_boat(double speed, string surf, string boatType) : water_transport(speed, surf), type(boatType) {}

void steam_boat::Output()
{
    water_transport::Output();
    cout << "Steamboat type: " << type << endl;
}
