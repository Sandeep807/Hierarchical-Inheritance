#include "car.h"

Car ::Car()
{
    cout << "Car constructor called" << endl;
}

void Car ::drive()
{
    cout << "Drive car" << endl;
}

void Car ::park()
{
    cout << "Car park" << endl;
}

Car::~Car()
{
    cout << "Car destructor called" << endl;
}