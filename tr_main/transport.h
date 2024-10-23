#pragma once
#include <string>
using namespace std;

class transport
{
protected:
    string surface;
public:
    transport();
    transport(string surf);
    void Output();
};