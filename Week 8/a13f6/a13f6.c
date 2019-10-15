#include <stdio.h>
#include "simpio.h"

void decompose(long num, long *digits, double *avg, long *max);

int main() {

    long num, digits, max;
    double avg;

    printf("Please insert non-negative number: ");
    num=GetLong();

    /*YPOLOGISMOS KAI EMFANISH TOY PLHTOYS TWN PSHFIWN, TOY MESOY OROY TWN PSHFIWN & TOY MEGISTOY PSHFIOY TOY ARITMOY num.*/
    decompose(num, &digits, &avg, &max);
    printf("Digits: %ld, Average: %.3f, Max: %ld", digits, avg, max);

return 0;
}

void decompose(long num, long *digits, double *avg, long *max)
{
    long n;
    double dSum;
    int dig;

    n=num;                         /*ARXIKOPOIHSH TOPIKWN METABLHTWN.*/
    dSum=dig=0;

    *digits=*avg=0;                /*ARXIKOPOIHSH DEIKTWN SE METABLHTES THS main().*/
    *max=dig;

    /*YPOLOGISMOS SYNOLIKOY ATHROISMATOS TWN PSHFIWN TOY n KAI APOTHIKEYSH STO dSum.*/
    /*YPOLOGISMOS TIMHS KATHE PSIFIOY TOY n KAI APOTHIKEYSH STO dig.*/
    /*YPOLOGISMOS TOY MEGISTOY PSHFIOY TOY n KAI APOTHIKEYSH STO *max.*/
    /*YPOLOGISMOS PLHTHOYS TWN PSHFIWN TOY n KAI APOTHIKEYSH STO *digits.*/
    while (n>0) {
        dSum+=n%10;
        dig=n%10;
        if (dig>*max) {
            *max=dig;
        }
        n/=10;
        (*digits)++;
    }

    /*YPOLOGISMOS MESOY OROY TWN PSHFIWNN TOY n. (AN n=0, O MESOS OROS PARAMENEI 0.)*/
    if (num!=0) {
        *avg=(dSum)/(*digits);
    }
}
