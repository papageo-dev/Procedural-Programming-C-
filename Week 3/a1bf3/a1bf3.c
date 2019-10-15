#include <stdio.h>
#include "simpio.h"
#include "math.h"


int main() {

    long years, cars, limit;
    double rythm;

    printf("DWSE TON ARXIKO ARITHMO TWN AYTOKINHTWN. \n");
    cars=GetLong();

    printf("DWSE TON ETHSIO RYTHMO AYKSHSHS. \n");
    rythm=GetReal();

    printf("DWSE TO ORIO. \n");
    limit=GetLong();

    years=0;

    while (cars<=limit) {                                /*YPOLOGISMOS AYTOKINHTWN ANA ETOS*/
        cars=ceil(cars*(1+rythm));
        years++;
    }

    printf("ETH: %ld \n", years);
    printf("AYTOKINHTA: %ld \n", cars);

return 0;
}
