#include "transport.h"
#include <iostream>
using namespace std;

transport::transport() : surface("unknown") {}
transport::transport(string surf) : surface(surf) {}

void transport::Output()
{
    cout << "Surface: " << surface << endl;
}
