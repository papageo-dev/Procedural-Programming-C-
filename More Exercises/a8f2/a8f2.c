#include <stdio.h>
#include "simpio.h"
#include "math.h"

int main() {

    int estTime, realTime, apodDiaf, pragmDiaf;

    printf("DWSE TON PROBLEPOMENO XRONO PTHSHS. \n");         /*ZHTAW TOYS XRONOYS APO TON XRHSTH.*/
    estTime=GetInteger();

    printf("DWSE TON PRAGMATIKO XRONO PTHSHS. \n");
    realTime=GetInteger();

    if (estTime>=0 && estTime<=29) {                          /*YPOLOGISMOS APODEKTHS DIAFORAS.*/
        apodDiaf=1;
    }
    else if (estTime>=30 && estTime<=59) {
        apodDiaf=2;
    }
    else if (estTime>=60 && estTime<=89) {
        apodDiaf=3;
    }
    else if (estTime>=90 && estTime<=119) {
        apodDiaf=4;
    }
    else if (estTime>=120 && estTime<=179) {
        apodDiaf=6;
    }
    else if (estTime>=180 && estTime<=239) {
        apodDiaf=8;
    }
    else if (estTime>=240 && estTime<=359) {
        apodDiaf=13;
    }
    else if (estTime>=360) {
        apodDiaf=17;
    }


    pragmDiaf=(realTime-estTime);                                 /*YPOLOGISMOS PRAGMATIKHS DIAFORAS.*/


    printf("APODEKTH DIAFORA: %d\n", apodDiaf);                   /*EMFANISH APOTELESMATWN.*/
    printf("DIAFORA EISAGWMENWN TIMWN: %d\n", pragmDiaf);


    if (pragmDiaf<apodDiaf) {
        printf("BIG \n");
    }
    else if (pragmDiaf>apodDiaf) {
        printf("SMALL \n");
    }
    else if (abs(pragmDiaf==apodDiaf)) {
        printf("GOOD \n");
    }

return 0;
}
