#include <stdio.h>
#include "simpio.h"

#define x 100
#define y 1000


int total(int n);


int main() {                                             /*KYRIWS PROGRAMMA.*/

    printf("ATHROISMA 1...100= %d \n", total(x));
    printf("ATHROISMA 1...1000= %d \n", total(y));

return 0;
}


int total(int n)                                          /*SYNARTHSH: YPOLOGISMOS ATHROISMATOS (i-n).*/
{
    int t,i;

    t=0;

    for (i=0; i<=n; i++)
        t+=i;
        return t;
}
