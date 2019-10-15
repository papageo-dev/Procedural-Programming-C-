#include <stdio.h>
#include "simpio.h"

int main() {

    long code;
    double yearSalary, weekSalary, hourSalary;
    int weekWorkHours;

    printf("DWSE TON KWDIKO TOY ERGAZOMENOY. \n");
    code = GetLong();

    if (code >= 1000) {

        printf("DWSE TON ETHSIO MISTHO TOY ERGAZOMENOY. \n");
        yearSalary = GetReal();

        weekSalary = (yearSalary/52);
        printf("O EVDOMADIAIOS MISTHOS TOY EGAZOMENOY EINAI: %g\n", weekSalary);

    }
    else
    {
        printf("DWSE TIS WRES EVDOMADIAIAS ERGASIAS TOY ERGAZOMENOY. \n");
        weekWorkHours = GetInteger();

        printf("DWSE THN AMOIVH ANA WRA. \n");
        hourSalary = GetReal();

        if (weekWorkHours <= 40) {

            weekSalary = (weekWorkHours * hourSalary);
        }
        else
        {
            weekSalary = (weekWorkHours * hourSalary) + (weekWorkHours-40) * (0.5*hourSalary);
        }
        printf("H EVDOMADIAIA AMOIVH TOY ERGAZOMENOY EINAI: %g\n", weekSalary);
        }
return 0;
}
