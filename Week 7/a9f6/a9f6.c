#include <stdio.h>
#include "simpio.h"

#define SALESMEN 4
#define PRODUCTS 5


void calculateSales(int S, int P, int sales[S][P], int prices[], int salesPerson[]);
void calculateProductSales(int S, int P, int sales[S][P], int productSale[]);
void maxArray(int lim, int table[], int *max, int *posMax);
void printArray(int lim, int table[]);

/*KYRIWS PROGRAMMA.*/
int main() {

    int  sales[SALESMEN][PRODUCTS]={{10,4,5,6,7},
                                   {7,0,12,1,3},
                                   {4,19,5,0,8},
                                   {3,2,1,5,6}},
         prices[PRODUCTS]={250,150,320,210,920};

    int salesPerson[SALESMEN], productSale[PRODUCTS], max, posMax;



    /*YPOLOGISMOS SYNOLIKOY POSOY EISPRAKSHS GIA KATHE PWLHTH KAI APOTHIKEYSTH STON salesPerson[].*/
    calculateSales(SALESMEN, PRODUCTS, sales, prices, salesPerson);

    /*YPOLOGISMOS PWLHSEWN GIA KATHE PROION KAI APOTHIKEYSHSTON productSale[].*/
    calculateProductSales(SALESMEN, PRODUCTS, sales, productSale);

    /*EMFANISH SYNOLIKWN PWLHSEWN KATHE PWLHTH.*/
    printf("SalesMan-Sales \n");
    printArray(SALESMEN, salesPerson);

    /*YPOLOGISMOS KAI EPISTROFH MEGISTHS TIMHS PWLHSEWN KAI THESHS STON PINAKA salesPerson[], ME DEIKTES.*/
    maxArray(SALESMEN, salesPerson, &max, &posMax);
    printf("Best SalesMan was %d, with %d sales. \n", posMax, max);

    /*EMFANISH SYNOLIKWN PWLHSEWN KATHE PROIONTOS.*/
    printf("Product-Items \n");
    printArray(PRODUCTS, productSale);

    /*YPOLOGISMOS KAI EPISTROFH MEGISTHS TIMHS PWLHSEWN PROIONTOS KAI ARITHO TEMAXIWN STON productSale[], ME DEIKTES.*/
    maxArray(PRODUCTS, productSale, &max, &posMax);
    printf("Best Product was %d, with %d items. \n", posMax, max);

return 0;
}



/*DEXETAI DISDIASTATO PINAKA(SxP) KAI EPISTREFEI TO ATHROISMA KATHE GRAMMHS TOY, STON salePerson[].*/
void calculateSales(int S, int P, int sales[S][P], int prices[], int salesPerson[])
{
    int i, j;

    for (i=0; i<S; i++) {
        salesPerson[i]=0;
        for (j=0; j<P; j++) {
            salesPerson[i]+=sales[i][j]*prices[j];
        }
    }
}

/*DEXETAI DISDIASTATO PINAKA(SxP) KAI EPISTREFEI TO ATHROISMA KATHE STHLHS TOY, STON productSale[].*/
void calculateProductSales(int S, int P, int sales[S][P], int productSale[P])
{
    int i, j;

    for (j=0; j<P; j++) {
        productSale[j]=0;
        for (i=0; i<S; i++) {
            productSale[j]+=sales[i][j];
        }
    }
}

/*DEXETAI MONODIASTATO PINAKA KAI EPISTREFEI TO MEGISTO STOIXEIO KAI THN THESH TOY, ME DEIKTES.*/
void maxArray(int lim, int table[], int *max, int *posMax)
{
    int i;

    *max=table[0];
    *posMax=0;

    for (i=0; i<lim; i++) {
        if (table[i]>*max) {
            *max=table[i];
            *posMax=i;
        }
    }
}

/*DEXETAI MONODIASTATO PINAKA KAI TYPWNEI TA STOIXEIA TOY KAI TIS THESEIS TOYS.*/
void printArray(int lim, int table[])
{
    int i;

    for (i=0; i<lim; i++) {
        printf("%4d     %4d \n", i, table[i]);
    }
}
