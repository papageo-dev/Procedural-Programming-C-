#include <stdio.h>
#include "simpio.h"

int main() {

    int age, max, min;

    max=0;                                                                /*ARXIKOPOIHSH MIN, MAX.*/
    min=5000;

    while (printf("DWSE HLIKIA: \n"),age=GetInteger(),age!=-1) {          /*O XRHSTHS DINEI HLIKIES, MEXRI NA DWSEI TO -1(guard).*/

        if (age>max) {                                                    /*YPOLOGISMOS MAX.*/
            max=age;
        }
        if (age<min && age!=-1) {                                         /*YPOLOGISMOS MIN, ME EKSERAISH TO -1(guard).*/
            min=age;
        }
    }

    printf("H MEGALYTERH HLIKIA EINAI: %d\n", max);
    printf("H MIKROTERH HLIKIA EINAI: %d\n", min);

return 0;
}
