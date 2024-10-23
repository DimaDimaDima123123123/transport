#include <iostream>
#include "car.h"
#include "train.h"
#include "hourse_drawn.h"
#include "tanker.h"
#include "boat.h"
#include "steam_boat.h"
#include "plane.h"
#include "helicopter.h"
#include "air_ship.h"

using namespace std;

int main()
{
    cout << "\tGROUND TRANSPORT:\n";
    car(200.0, "ground", "Volvo").Output();
    cout << endl;

    train(110.0, "ground", 8).Output();
    cout << endl;

    hourse_drawn(20.0, "ground", "mule").Output();
    cout << endl;

    cout << "\tWATER TRANSPORT:\n";

    tanker(40.0, "weter", 400000.0).Output();
    cout << endl;

    boat(30.0, "water", 5).Output();
    cout << endl;

    steam_boat(50.0, "water", "passenger").Output();
    cout << endl;

    cout << "\tAIR TRANSPORT:\n";

    plane(800.0, "air", 2).Output();
    cout << endl;

    helicopter(240.0, "air", "rescue").Output();
    cout << endl;

    air_ship(100.0, "air", 5000.0).Output();
    cout << endl;

    return 0;
}