#include "DeliveryTruck.h"
#include "car.h"
#include "vehicle.h"
#include "truck.h"
int main() {
    DeliveryTruck deliveryTruck(80, "Blue", 4, 2000,"town");
    deliveryTruck.start();
    deliveryTruck.playMusic();
    deliveryTruck.loadCargo();
    deliveryTruck.scheduleDelivery();
    return 0;
}
