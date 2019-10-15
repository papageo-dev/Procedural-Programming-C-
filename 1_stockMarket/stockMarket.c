/* Stock Market Analysis*/

#include <stdio.h>

/*1o ERWTHMA: DHMIOURGIA SYNARTHSEWN GIA TO ARXIKO PROGRAMMA.*/
float calculateMax(int size, float table[]);
int calculateIntValue(int size, float table[], float table2[], float max);
void print1(int size);
void printMax(int size, float table[], float max);
void printArray(int size, float table[]);
/*2o ERWTHMA: YPOLOGISMOS KAI EMFANISH TIMHS AKSIOLOGHSHS.*/
void calculateValue(int size, float cds_prices[], int risk[], float V[]);
void printValue(int size, float cds_prices[], int risk[], float V[]);
/*3o ERWTHMA: YPOLOGISMOS KAI EMFANISH PLHTHOYS TIMWN POY EINAI MEGALYTERES(*high) KAI MIKROTERES (*low) APO THN TIMH KLEISIMATOS.*/
void high_low(int r, int c, float deriv_day_data[r][c], int *high, int *low, int row);


int main(){
    float stock_prices[10] = {34.5, 22.4, 77.8, 22.1, 10.0, 11.25, 12, 13, 16, 20.5 };
    float deriv_prices[5] = {30.5, 21.4, 89.8, 20.1, 10.0};
    float cds_prices[11] = {38.5, 33.4, 67.8, 12.1, 16.0, 10.25, 11, 23, 36, 10.1 ,30.4};
    int risk[11] = {90,10,20,30,50,60,30,30,30,10,10};
    float deriv_day_data[5][10] = {
                {30.5,25,22,32.3,30.5,32.6,38.9,40,22,30.5},
                {22.5,21.4,14,40.3,22.5,12.6,38.9,40,39,21.4},
                {30.5,25,22,89.8,34.5,89.8,38.9,40,30,89.8},
                {20.2,35,20.1,12.3,20.1,32.6,38.9,40,22,20.1},
                {45.5,10.0,22,10.0,14.5,23.6,48.9,8,10.0,10.0}
    };

    float interesting_stock[10];
    int ni_stock;
    float interesting_cds[11];
    int ni_cds;
    float max_stock, max_deriv, max_cds;
    float V[11];
    int i, high, low;


    /* Calculating Max Values */
    max_stock = calculateMax(10, stock_prices);

    max_deriv = calculateMax(5, deriv_prices);

    max_cds = calculateMax(11, cds_prices);

    /* Finding Interesting Values */
    ni_stock=calculateIntValue(10, stock_prices, interesting_stock, max_stock);

    ni_cds=calculateIntValue(11, cds_prices, interesting_cds, max_cds);

    /* Printing */
    printf("Stock Prices.\n");

    print1(30);

    printMax(10, stock_prices, max_stock);

    printArray(ni_stock, interesting_stock);

    print1(10);

    /* Derivatives */
    printf("Derivative Prices.\n");

    print1(30);

    printMax(5, deriv_prices, max_deriv);

    print1(10);

    /* Cds Prices */

    printf("CDS Prices.\n");

    print1(30);

    printMax(11, cds_prices, max_cds);

    printArray(ni_cds, interesting_cds);

    print1(10);

    /*2o ERWTHMA: YPOLOGISMOS KAI EMFANISH TIMHS AKSIOLOGHSHS.*/
    calculateValue(11, cds_prices, risk, V);
    printValue(11, cds_prices, risk, V);

    print1(10);

    /*3o ERWTHMA: YPOLOGISMOS KAI EMFANISH PLHTHOYS TIMWN POY EINAI MEGALYTERES(*high) KAI MIKROTERES (*low) APO THN TIMH KLEISIMATOS.*/
    for (i=0; i<5; i++) {
        high_low(5, 10, deriv_day_data, &high, &low, i);
        printf("Devirative %d, high %d / low %d values. \n", i, high, low);
    }

    print1(10);

    return 0;
}



float calculateMax(int size, float table[])
{
    int i, max;

    max=table[0];
    for (i=0; i<size; i++) {
        if (table[i]>max) {
            max=table[i];
        }
    }
    return max;
}


int calculateIntValue(int size, float table[], float table2[], float max)
{
    int i, ni;

    ni=0;
    for (i=0; i<size; i++) {
        if (table[i]>max/2) {
            table2[ni++]=table[i];
        }
    }
    return ni;
}


void print1(int size)
{
    int i;

    for (i=0; i<size; i++) {
        printf("-");
    }
    printf("\n");
}

void printMax(int size, float table[], float max)
{
    int i;

    printf("Max Price:: %4.2f \n", max);
    for(i=0;i<size;i++) {
        printf("%s(%3.2f) ",(max == table[i] ? "-Max-" : ""),table[i]);
    }
    printf("\n");
}


void printArray(int size, float table[])
{
    int i;

    for (i=0; i<size; i++) {
        printf(" [%4.2f] ", table[i]);
    }
    printf("\n");
}


/*2o ERWTHMA: YPOLOGISMOS TIMHS AKSIOLOGHSHS KAI APOTHIKEYSH STON V[].*/
void calculateValue(int size, float cds_prices[], int risk[], float V[])
{
    int i;

    for (i=0; i<size; i++) {
        if (cds_prices[i]<20 && risk[i]<50) {
            V[i]=20;
        }
        else if (cds_prices[i]>=20 && risk[i]<80) {
            V[i]=10+(cds_prices[i]*risk[i])/100;
        }
        else {
            V[i]=100+(cds_prices[i]*risk[i])/100;
        }
    }
}


/*2o ERWTHMA: EMFANISH TIMHS CD, RISKOY KAI TIMHS AKSIOLOGHSHS.*/
void printValue(int size, float cds_prices[], int risk[], float V[])
{
    int i;

    for (i=0; i<size; i++) {
        printf("CDS assessment: cds %.2f Risk %d Value %.2f \n", cds_prices[i], risk[i], V[i]);
    }
}


/*3o ERWTHMA: YPOLOGISMOS PLHTHOYS TIMWN POY EINAI MEGALYTERES(*high) KAI MIKROTERES (*low) APO THN TIMH KLEISIMATOS.*/
void high_low(int r, int c, float deriv_day_data[r][c], int *high, int *low, int row)
{
    int j;

    *high=*low=0;

        for (j=0; j<c; j++) {
            if (deriv_day_data[row][j]>deriv_day_data[row][c-1]) {
                *high=*high+1;
            }
            else if (deriv_day_data[row][j]<deriv_day_data[row][c-1]) {
                *low=*low+1;
            }
        }
}

