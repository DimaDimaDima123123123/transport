#include "train.h"
#include <iostream>
using namespace std;

train::train() : ground_transport(), numOfCarriages(0) {}
train::train(double speed, string surf, int carriages) : ground_transport(speed, surf), numOfCarriages(carriages) {}

void train::Output()
{
    ground_transport::Output();
    cout << "Number of carriages: " << numOfCarriages << endl;
}
