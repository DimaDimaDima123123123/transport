#include "hourse_drawn.h"
#include <iostream>
using namespace std;

hourse_drawn::hourse_drawn() : ground_transport(), animalType("unknown") {}
hourse_drawn::hourse_drawn(double speed, string surf, string animal) : ground_transport(speed, surf), animalType(animal) {}

void hourse_drawn::Output()
{
    ground_transport::Output();
    cout << "Animal type: " << animalType << endl;
}
