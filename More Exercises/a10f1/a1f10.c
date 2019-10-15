#include <stdio.h>
#include "simpio.h"
#include "math.h"

int main() {

    int height, weight;

    printf("DWSE TO BAROS. \n");
    weight=GetInteger();

    height=ceil(1.12*weight + 65)*1.2 + 7.0;
    printf("TO YPSOS EINAI: %d\n", height);

return 0;
}
