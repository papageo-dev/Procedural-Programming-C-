#include <stdio.h>
#include "simpio.h"
#include "genlib.h"


int Cube(int digit);
int Sum_Cube(int x);
bool IsArmstrong(int x);


int main() {                                                     /*KYRIWS PROGRAMMA.*/

    int i;

    for (i=1; i<=999; i++) {
        if (IsArmstrong(i)) {
            printf("Number %d is Armstrong!\n", i);              /*EMFANISH ARITHMWN ARMSTRONG 1-999.*/
        }
    }

return 0;
}


int Cube(int digit)                                              /*SYNARTHSH: YPOLOGISMOS KAI EPISTROFH KYBOY ARITHMOY*/
{
    int i, r;

    r=1;

    for (i=0; i<3; i++)
        r = r*digit;
        return (r);
    }



int Sum_Cube(int x)                                               /*SYNARTHSH: YPOLOGISMOS KAI EPISTROFH KYBOY ATHRISMATOS TWN PSIFIWN TOY ARITHMOY.*/
{
    int d1, d2, d3;

    d1=(x%10);
    d2=(x%100)/10;
    d3=(x/100);

    return (Cube(d1)+Cube(d2)+Cube(d3));
}


bool IsArmstrong(int x)                                           /*SYNARTHSH: ELEGXOS AN O ARITHMOS EINAI ARMSTRONG.*/
{
    return (x==Sum_Cube(x));
}
