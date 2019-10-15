#include <stdio.h>
#include "simpio.h"

int main() {

    int workHours;
    long salaryHour;
    double rateKrat, akApod, kaApod, krat;

    printf("DWSE TON ARITHMO TWN WRWN ERGASIAS. \n");
    workHours=GetInteger();

    printf("DWSE THN WRIAIA ANTIMISTHIA. \n");
    salaryHour=GetLong();

    printf("DWSE TO POSOSTO TWN KRATHSEWN TOY ERGAZOMENOY. \n");
    rateKrat=GetReal();

    krat=(workHours*salaryHour)*rateKrat;
    kaApod=(workHours*salaryHour);
    akApod=(kaApod+krat);

    printf("OI AKATHARISTES APODOXES TOY ERGAZOMENOY EINAI: %g\n", akApod);
    printf("OI KRATHSEIS TOY ERGAZOMENOY EINAI: %g\n", krat);
    printf("OI KATHARES APODOXES TOY ERGAZOMENOY EINAI: %g\n", kaApod);

return 0;
}
