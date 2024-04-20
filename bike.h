#ifndef BIKE_H
#define BIKE_H
#include "vehicle.h"

class Bike : public Vehicle
{
public:
    Bike();
    void ride();
    void stand();
    ~Bike();
};
#endif