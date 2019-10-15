#include <stdio.h>
#include "simpio.h"

int main() {

    long price, piece;
    double fpa, cost;

    printf("DWSE THN TIMH TEMAXIOU. \n");
    price=GetLong();

    printf("DWSE TO POSOSTO FPA. \n");
    fpa=GetReal();

    printf("DWSE TO PLITHOS TWN TEMAXIWN. \n");
    piece=GetLong();

    cost=(price+(price*fpa))*piece;
    printf("TO KOSTOS THS PARAGGELIAS EINAI: %g\n", cost);

return 0;
}
