#include <stdio.h>
#include "simpio.h"

#define i 1;


int main() {

    double sum,x,y;                                     /*DHLWSH KAI ARXIKOPOIHSH METABLHTWN.*/

    sum=0;
    y=i;

    for (x=1; x<=100; x++) {                            /*YPOLOGISMOS/AYKSHSH ATHROISMATOS(sum).*/
        sum += (y/x);
    }

    printf("TO ATHROISMA EINAI: %f\n", sum);

    return 0;
}
