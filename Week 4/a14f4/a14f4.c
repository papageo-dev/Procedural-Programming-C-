#include <stdio.h>
#include "simpio.h"


int max(int a, int b);
int gr(int a, int b, int c);


int main() {                              /*KYRIWS PROGRAMMA.*/

    int a,b,c,y;

    printf("DWSE A: \n");                 /*DIABASMA a,b,c APO TON XRHSTH.*/
    a=GetInteger();

    printf("DWSE B: \n");
    b=GetInteger();

    printf("DWSE C: \n");
    c=GetInteger();

    y=((2*max(a,b))+(3*gr(a,b,c)))/4;     /*YPOLOGISMOS KAI EMFANISH TOY Y.*/
    printf("Y= %d \n", y);

return 0;
}


int max(int a, int b)                     /*SYNARTHSH: MAX a,b.*/
{
    if (a>b) {
        return a;
    }
    else if (a<b) {
        return b;
    }
}


int gr(int a, int b, int c)                /*SYNARTHSH: MAX a,b,c.*/
{
    if (a>b && a>c) {
        return a;
    }
    else if (b>a && b>c) {
        return b;
    }
    else if (c>a && c>b) {
        return c;
    }
}

