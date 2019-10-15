#include <stdio.h>
#include "simpio.h"

int main() {

    int devices, cont50, cont20, cont5, cont1;

    printf("DWSE TO PLHTHOS TWN SYSKEVWN. \n");
    devices=GetInteger();

    cont50=(devices/50);
    printf("50: %d\n", cont50);

    cont20=(devices%50)/20;
    printf("20: %d\n", cont20);

    cont5=((devices%50)+(devices%20))/5;
    printf("5: %d\n", cont5);

    cont1=((devices%50)+(devices%20)+(devices%5))/1;
    printf("1: %d\n", cont1);

return 0;
}
