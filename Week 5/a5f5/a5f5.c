#include <stdio.h>
#include "simpio.h"


#define MAX 100                /*DHLWSH MEGISTWN GRAMMWN & STHLWN PINAKWN, (THA XRHSIMOPOIHTHEI MEROS TOYS).*/


int main() {

    int i, j, M, N;
    long A[MAX][MAX], sumL[MAX], sumC[MAX], sumD1, sumD2;

    printf("DWSE ARITHMO GRAMMWN: ");            /*ZHTAEI APO TON XRHSTH TON ARITMO GRAMMWN TOY A[].*/
    M=GetInteger();

    printf("DWSE ARITHMO STHLWN: ");             /*ZHTAEI APO TON XRHSTH TON ARITHMO STHLWN TOY A[].*/
    N=GetInteger();


    for (i=0; i<M; i++) {                        /*ZHTAEI TO GINOMENO MxN KAI TO APOTHIKEYEI STON A[].*/
        for (j=0; j<N; j++) {
            A[i][j]=GetLong();
            printf("THESI [%d, %d]: %4ld \n", i, j, A[i][j]);
        }
    }


    printf("\nTable: \n");


    for(i=0; i<M; i++) {                         /*YPOLOGISMOS KAI EMFANISH SYNOLOY GRAMMWN TOY A[] KAI APOTHIKEYSH STON sumL[].*/
        sumL[i]=0;
        for (j=0; j<N; j++) {
            sumL[i]+=A[i][j];
            printf("%4ld", A[i][j]);
        }
        printf("| = %4ld \n", sumL[i]);
    }


    printf("------------ \n");


    for (j=0; j<N; j++) {                        /*YPOLOGISMOS KAI EMFANISH SYNOLOY STHLWN TOY A[] KAI APOTHIKEYSH STON sumC[].*/
        sumC[j]=0;
        for (i=0; i<M; i++) {
            sumC[j]+=A[i][j];
        }
        printf("%4ld", sumC[j]);
    }


    printf("\n");


    if (M==N) {                                   /*YPOLOGISMOS KAI EMFANISH KYRIAS & DEFTEREBOUSAS DIAGWNIOY, EAN O A[] EINAI TETRAGWNIKOS.*/
        sumD1=0;
        sumD2=0;
    for (i=0; i<M; i++) {
            for (j=0; j<N; j++) {
                if (i==j) {
                    sumD1+=A[i][j];
                }
                if (i+j==N-1) {
                    sumD2+=A[i][j];
                }
            }
    }
    printf("Sum Diag 1: %ld, ", sumD1);
    printf(" Sum Diag 2: %ld \n", sumD2);
    }

return 0;
}
