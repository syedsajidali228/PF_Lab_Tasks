#include <stdio.h>

const int TOLL_RATE = 50;

void processVehicle(char vehicleType[])

{
    static  int totalVehicleCount = 0;
    static int totalTollCollected = 0;

    totalVehicleCount++;
    totalTollCollected += TOLL_RATE;

        printf("Vehicle : %s |  Toll : %d PKR\n", vehicleType, TOLL_RATE);
        printf("Vehicles Processed : %d | Revenue :  %d PKR \n \n",
           totalVehicleCount, totalTollCollected );
}

int main()

{
processVehicle("Car");
processVehicle("Bus");
processVehicle("Truck");
processVehicle("Car");

return 0;
}
