#include <stdio.h>
#include "simpio.h"

int main() {

    int code, pagio;
    long now, prev, katRevm, cost;
    double fpa, totalCost;

    printf("DWSE TON KWDIKO KATHGORIAS TIMOLOGIOY. \n");
    code=GetInteger();

    printf("DWSE THN PAROYSA ENDEIKSH TOY METRHTH. \n");
    now=GetLong();

    printf("DWSE THN PROHGOYMENH ENDEIKSH TOY METRHTH. \n");
    prev=GetLong();

    if (code==1 || code ==2) {                                         /*YPOLOGISMOS PAGIOY, ANALOGA ME TON KWDIKO TIMOLOGIOY.*/
        pagio=20;
    }
    else if (code==3) {
        pagio=100;
    }
    else {
        printf("LATHOS KWDIKOS! EPITREPONTE OI KWDIKOI: 1, 2, 3.");
    }


    katRevm=(now-prev);                                                /*YPOLOGISMOS KATANALWSHS REBMATOS.*/



    if (katRevm>=1 && katRevm<=200) {                                  /*YPOLOGISMOS KOSTOYS/AXIAS REBMATOS*/
        cost=(katRevm*12);
    }
    else if (katRevm>=201 && katRevm<=500) {
        cost=(200*12)+((katRevm-200)*15);
    }
    else if (katRevm>=501 && katRevm<=1500) {
        cost=(500*15)+((katRevm-500)*20);
    }
    else if (katRevm>=1501 && katRevm<=10000) {
        cost=(1500*20)+((katRevm-1500)*30);
    }
    else {
        printf("LATHOS ENDEIKSEIS! DOKIMASE KSANA! \n");
    }


    totalCost=((cost/100)+pagio);                                            /*YPOLOGISMOS SYNOLIKOY KOSTOYS.*/

    fpa=((totalCost*0.18));                                                  /*YPOLOGISMOS FPA, GIA TO SYNOLIKO KOSTOS.*/


    printf("KATANALWSH REBMATOS SE MONADES: %ld \n", katRevm);               /*EMFANISH ZHTOYMENWN PLHROFORIWN.*/
    printf("AXIA REBMATOS(cent): %ld \n", cost);
    printf("PAGIO(euro): %d \n", pagio);
    printf("FPA(euro): %.2f \n", fpa);
    printf("SYNOLIKO POSO PLHRWMHS(euro): %.2f \n", totalCost+fpa);

return 0;
}
