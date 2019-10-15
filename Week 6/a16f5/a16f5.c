#include <stdio.h>
#include "simpio.h"
#include <genlib.h>

#define SIZE 50

void populate(int s, int table[]);
void printArr(int s, int table[]);
void checkTable(int s, int table[], int num, int *t, int pos[]);

/*KYRIWS PROGRAMMA*/
int main() {

    int a[SIZE], n, t, pos[SIZE];

    populate(SIZE, a);

    printArr(SIZE, a);

    printf("DWSE ENAN ARITMO APO TO 0 EWS TO 9: ");
    n=GetInteger();

    checkTable(SIZE, a, n, &t, pos);

    printf("\nO ARITHMOS %d EMFANIZETAI %d FORES. \n", n, t);

return 0;
}


/*GEMISMA PINAKA, ME TYXAIOYS AKERAIOYS 0-9.*/
void populate(int s, int table[])
{
    int i;

    for (i=0; i<s; i++)
        table[i]=rand()%10;
}

/*EMFANISH OLWN TWN STOIXEIWN TOY PINAKA.*/
void printArr(int s, int table[])
{
    int i;

    for (i=0; i<s; i++) {
        printf(" %d ", table[i]);
    }
    printf("\n---------------\n");
}


void checkTable(int s, int table[], int num, int *t, int pos[])
{
    int i, j;

    printf("\nO ARITHMOS %d EMFANIZETAI STIS THESEIS: \n", num);

    *t=0;
    for (i=0; i<s; i++) {
        if (num==table[i]) {
            *t+=1;
            for (j=0; j<*t; j++) {
                pos[j]=i;
                break;
            }
            printf(" %d " , pos[j]);
        }
    }
    printf("\n----------------\n");
}
