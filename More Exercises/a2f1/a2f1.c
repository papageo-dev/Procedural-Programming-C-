#include <stdio.h>
#include "simpio.h"

int main() {

long side1, side2;
double emvadon;

printf("DWSE TO MHKOS THS PRWTHS PLEBRAS. \n");
side1 = GetLong();

printf("DWSE TO MHKOS THS DEYTERHS PLEBRAS. \n");
side2 = GetLong();

emvadon = (side1*side2)/2;
printf("TO EMBADON TOY TRIGWNOY EINAI: %f\n", emvadon);

return 0;
}
