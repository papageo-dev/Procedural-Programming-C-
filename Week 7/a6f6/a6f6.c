#include <stdio.h>
#include "simpio.h"

#define N 5
#define M 4

void readData(int r, int c, int table[r][c]);
void FindMean(int r, int c, int table[r][c], double *mMean, double *wMean, int x);

int main() {

    int A[N][M];
    double mMean, wMean;

    /*KATAXWRHSH TIMWN, GIA N ATOMA, STON A[N][M].*/
    readData(N, M, A);

    /*YPOLOGISMOS KAI EMFANISH TOY M.O. BAROYS, GIA ANDRES KAI GYNAIKES.*/
    FindMean(N, M, A, &mMean, &wMean, 1);
    printf("MESOS OROS BAROYS ANDRWN: %g\n", mMean);
    printf("MESOS OROS BAROYS GYNAIKWN: %g\n", wMean);
    printf("\n");

    /*YPOLOGISMOS KAI EMFANISH TOY M.O. YPSOYS, GIA ANDRES KAI GYNAIKES.*/
    FindMean(N, M, A, &mMean, &wMean, 2);
    printf("MESOS OROS YPSOYS ANDRWN: %g\n", mMean);
    printf("MESOS OROS YPSOYS GYNAIKWN: %g\n", wMean);
    printf("\n");

    /*YPOLOGISMOS KAI EMFANISH TOY M.O. HLIKIAS, GIA ANDRES KAI GYNAIKES.*/
    FindMean(N, M, A, &mMean, &wMean, 3);
    printf("MESOS OROS HLIKIAS ANDRWN: %g\n", mMean);
    printf("MESOS OROS HLIKIAS GYNAIKWN: %g\n", wMean);
    printf("\n");

return 0;
}



/*SYNARTHSH: DIAVASMA AKERAIWN ARITHMWN APO TON XRHSTH KAI KATAXWRHSH STON table[r][c].*/
void readData(int r, int c, int table[r][c])
{
    int i, j;

    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            if (j==0) {
                printf("DWSE FYLO: ");
            }
            if (j==1) {
                printf("DWSE BAROS: ");
            }
            if (j==2) {
                printf("DWSE YPSOS: ");
            }
            if (j==3) {
                printf("DWSE HLIKIA: ");
            }
            table[i][j]=GetInteger();
        }
        printf("-----\n");
    }
}


/*SYNARTHSH: YPOLOGISMOS KAI EPISTROFH TOY MESOY OROY GIA SYGKEKRIMENH STHLH(x) TOY table[r][c], ME DEIKTES.*/
void FindMean(int r, int c, int table[r][c], double *mMean, double *wMean, int x)
{
    int i;
    double mSum, wSum;

    mSum=wSum=0; /*MHDENISMOS TOPIKWN METABLHTWN POY THA DEXTOYN TO SYNOLO.*/
    *mMean=*wMean=0; /*MHDENISMOS METABLHTWN(DEIKTWN) POY THA DEXTOYN TON MESO.*/

    for (i=0; i<r; i++) {
        if (table[i][0]==0) {
            *mMean=*mMean+table[i][x];
            mSum++;
        }
        else if (table[i][0]==1) {
            *wMean=*wMean+table[i][x];
            wSum++;
        }
    }
    *mMean=*mMean/mSum;
    *wMean=*wMean/wSum;
}
