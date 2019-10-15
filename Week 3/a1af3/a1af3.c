#include <stdio.h>
#include "simpio.h"
#include "math.h"

#define iCars 80000
#define rate 0.07
#define limit 160000


int main() {

    long years, cars;

    cars=iCars;
    years=0;

    while (cars<=limit) {
        cars=ceil(cars*(1+rate));
        years++;
    }

    printf("ETH: %ld \n", years);
    printf("AYTOKINHTA: %ld \n", cars);

return 0;
}
