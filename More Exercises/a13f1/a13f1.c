#include <stdio.h>
#include "simpio.h"

int main() {

    int vA, vB, vC;
    double mo;

    printf("DWSE TON BATHMO TOY A TRIMHNOY. \n");
    vA=GetInteger();

    printf("DWSE TON BATHMO TOY B TRIMHNOY. \n");
    vB=GetInteger();

    printf("DWSE TON BATHMO TOY C TRIMHNOY. \n");
    vC=GetInteger();

    if (vA<=20 && vB<=20 && vC<=20) {

    mo=(vA+vB+vC)/3;
    printf("O MESOS OROS EINAI: %g\n", mo);

    }
    else {
        printf("LATHOS! OI VATHMOI PREPEI NA EINAI APO 1 EWS 20.");
    }

return 0;
}
