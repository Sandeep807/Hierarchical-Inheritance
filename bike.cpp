#include "bike.h"

Bike ::Bike()
{
    cout << "Bike constructor called" << endl;
}

void Bike ::ride()
{
    cout << "Bike ride" << endl;
}

void Bike ::stand()
{
    cout << "Bike stand" << endl;
}

Bike ::~Bike()
{
    cout << "Bike destructor called" << endl;
}