#include <stdio.h>
#include "simpio.h"

int main() {


    int workDaysPerYear;
    long paymentPerDay;
    double gift, giftRate;

    printf("DWSE TIS HMERES ERGASIAS TOY ETOYS. \n");
    workDaysPerYear = GetInteger();

    printf("DWSE THN HMERHSIA AMOIBH. \n");
    paymentPerDay = GetLong();

    printf("DWSE TO POSOSTO DWROU. \n");
    giftRate = GetReal();

    gift = ((workDaysPerYear * paymentPerDay) * giftRate);
    printf("TO DWRO EINAI: %g \n", gift);
}
