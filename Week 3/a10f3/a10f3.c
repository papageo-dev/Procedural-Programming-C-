#include <stdio.h>
#include "simpio.h"

int main() {

    int x,y,z;

    for (x=1; x<=10; x++) {                   /*EKTYPWSH THS PRWTHS STHLHS TOY PINAKA.*/
            printf("%2d", x);
        for (y=1; y<=10; y++) {               /*EKTYPWSH TWN YPOLOIPWN STHLWN, MEXRI z=100*/
            z=(x*y);
            printf("%4d", z);
        }
        printf("\n");
    }

return 0;
}
