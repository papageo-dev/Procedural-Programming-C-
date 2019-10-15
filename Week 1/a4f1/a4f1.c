#include <stdio.h>
#include "simpio.h"

int main() {

    long purchaseAmount;
    int rate;
    double profit, saleAmount;

    printf("DWSE THN KATHARH AXIA. \n");
    purchaseAmount = GetLong();

    printf("DWSE TO POSOSTO KERDOUS. \n");
    rate = GetInteger();

    profit = (purchaseAmount * ((double)rate/100));
    printf("TO KERDOS EINAI: %g \n", profit);

    saleAmount = (purchaseAmount + profit);
    printf("TO SYNOLIKO POSO EINAI: %g \n", saleAmount);

    return 0;
}
