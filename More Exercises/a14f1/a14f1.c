#include <stdio.h>
#include "simpio.h"

int main() {

    int weight, height, age;
    double bmr;

    printf("DWSE TO BAROS SE KILA. \n");
    weight=GetInteger();

    printf("DWSE TO YPSOS. \n");
    height=GetInteger();

    printf("DWSE THN HLIKIA. \n");
    age=GetInteger();

    bmr = 655 + (9.6 * weight) + (1.8 *height) - (4.7 * age);
    printf("TO BMR EINAI: %.2f\n", bmr);

return 0;
}
