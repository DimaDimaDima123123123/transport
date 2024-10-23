#include "car.h"
#include <iostream>
using namespace std;

car::car() : ground_transport(), brand("unknown") {}
car::car(double speed, string surf, string carBrand) : ground_transport(speed, surf), brand(carBrand) {}

void car::Output()
{
    ground_transport::Output();
    cout << "Brand: " << brand << endl;
}
