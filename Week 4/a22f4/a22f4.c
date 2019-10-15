#include <stdio.h>
#include "simpio.h"

double FPA(double tC, int cat);                                       /*KYRIWS PROGRAMMA*/

int main() {

    int i, pieces, fpaCat;
    float price;
    double totalCost, Fpa, costFpa, totalFpa, totalCostFpa;

    totalCostFpa=0;                                                   /*ARXIKOPOIHSH SYNOLWN KOSTOUS KAI FPA = 0.*/
    totalFpa=0;

    for (i=1; i<=5; i++) {                                            /*KATAGRAFH PLHTHOUS, TIMHS KAI KATHGORIAS FPA GIA KATHE PROION.*/
        printf("DWSE TO PLHTHOS TEMAXIWN APO TO PROION %d: ", i);
        pieces=GetInteger();
        printf("DWSE THN TIMH GIA TO PROION %d: ", i);
        price=GetReal();
        printf("DWSE THN KATHGORIA F.P.A. GIA TO PROION %d: ", i);
        fpaCat=GetInteger();


    totalCost=(pieces*price);            /*YPOLOGISMOS KOSTOYS, FPA KAI KOSTOYS+FPA, GIA KATHE PROION.*/
    Fpa=FPA(totalCost, fpaCat);
    costFpa=(totalCost+Fpa);

    totalFpa+=Fpa;                       /*YPOLOGISMOS SYNOLIKOY FPA & SYNOLIKOY KOSTOYS+FPA.*/
    totalCostFpa+=costFpa;
    }

    printf("SYNOLIKO KOSTOS: %.2f \n", totalCostFpa);      /*EMFANISH SYNOLIKOY FPA & SYNOLIKOY KOSTOYS+FPA.*/
    printf("SYNOLIKO F.P.A.: %.2f \n", totalFpa);


return 0;
}


double FPA(double tC, int cat)                                        /*SYNARTHSH: YPOLOGISMOS FPA, GIA KATHE PROION.*/
{
    double fpa;

    if (cat==1) {
        fpa=(tC*0.00);
        return fpa;
    }
    else if (cat==2) {
        fpa=(tC*0.06);
        return fpa;
    }
    else if (cat==3) {
        fpa=(tC*0.13);
        return fpa;
    }
    else if (cat==4) {
        fpa=(tC*0.19);
        return fpa;
    }
    else {
        printf("LATHOS KATHGORIA F.P.A. ! ! ! \n");
        fpa=0;
        return fpa;
    }
}
