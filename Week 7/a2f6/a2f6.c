#include <stdio.h>
#include <stdlib.h>
#include "simpio.h"

#define SIZE 100


void fillArraySum(int *sum, int S, int table[SIZE]);
void MaxMin(int *sum, int table[SIZE], int *max, int *min);


int main() {

    int A[SIZE], sum, max, min;

    /*GEMISMA TOY A[] ME (+)ARITHMOYS, MEXRI NA DWTHEI TO -1. YPOLOGISMOS TOY PLHTHOYS TWN ARITHMWN, XWRIS TO-1.*/
    fillArraySum(&sum, SIZE, A);

    MaxMin(&sum, A, &max, &min);
    printf("The range of values is %d-%d.", min, max);

return 0;
}



/*DIAVASMA ARITHMWN APO TON XRHSTH KAI APOTHIKEYSH STON table[], MEXRIS OTOY NA DWTHEI TO -1(guard). YPOLOGISMOS PLHTHOYS TIMWN, XWRIS TO -1, ME DEIKTH(*sum).*/
void fillArraySum(int *sum, int S, int table[SIZE])
{
    int i, n;

    printf("Enter the elements of the array, one per line.\nUse -1 to signal the end of the list.\n");

    *sum=0;
    for (i=0; i<=*sum; i++) {
        printf("? ");
        n=GetInteger();
        table[i]=n;
        if (n==-1) {
            break;
        }
        if (table[i]!=-1) {
            *sum=*sum+1;
        }
    }
}


/*YPOLOGISMOS KAI EPISTROFH MEGISTOY KAI ELAXISTOY STOIXEIOY TOY table[], ME DEIKTES.*/
void MaxMin(int *sum, int table[SIZE], int *max, int *min)
{
    int i;

    *max=*min=table[0];

    for (i=0; i<*sum; i++) {
        if (table[i]>*max) {
            *max=table[i];
        }
        if (table[i]<*min) {
            *min=table[i];
        }
    }
}

