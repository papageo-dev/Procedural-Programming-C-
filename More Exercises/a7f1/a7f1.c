#include <stdio.h>
#include "simpio.h"

int main() {

    long eis4, eis8, eis18;
    double fpa;

    printf("DWSE TIS SYNOLIKES EISPRAKSEIS GIA F.P.A.=0.04: \n");
    eis4=GetLong()*0.04;

    printf("DWSE TIS SYNOLIKES EISPRAKSEIS GIA F.P.A.=0.08: \n");
    eis8=GetLong()*0.08;

    printf("DWSE TIS SYNOLIKES EISPRAKSEIS GIA F.P.A.=0.18: \n");
    eis18=GetLong()*0.18;

    fpa = (eis4+eis8+eis18);
    printf("TO SYNOLIKO F.P.A. TOY DIMHNOY EINAI: %g\n", fpa);

return 0;
}
