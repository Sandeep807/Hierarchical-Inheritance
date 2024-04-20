#include "vehicle.h"
#include "car.h"
#include "bike.h"

int main()
{
    Bike bk;
    bk.start();
    bk.stop();
    bk.ride();
    bk.stand();

    Car car;
    car.start();
    car.stop();
    car.drive();
    car.park();
    return 0;
}