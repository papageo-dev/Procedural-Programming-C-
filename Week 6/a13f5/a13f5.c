#include <stdio.h>
#include "simpio.h"
#include "stdlib.h"

#define MAX 10

void populate_data(int r, int c, int A[r][c]);
void print_array(int r, int c, int A[r][c]);
void change_array(int r, int c, int A[r][c], int M[MAX][2]);

int main() {

    int r, c, A[MAX][MAX], M[MAX][2];

    printf("DWSE TON ARITHMO TWN GRAMMWN: ");
    r=GetInteger();

    printf("DWSE TON ARITHMO TWN STHLWN: ");
    c=GetInteger();

    populate_data(r, c, A);

    printf("  ARXIKOS PINAKAS \n");

    print_array(r, c, A);

    change_array(r, c, A, M);

    printf("  ALLAGMENOS PINAKAS \n");

    print_array(r, c, A);

return 0;
}


/*GEMISMA TOY PINAKA  ME TYXAIOYS AKERAIOYS 0-99.*/
void populate_data(int r, int c, int A[r][c])
{
    int i, j;

    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            A[i][j]=rand()%100;
        }
    }
}

/*EKTYPWSH TWN STOIXEIWN TOY PINAKA.*/
void print_array(int r, int c, int A[r][c])
{
    int i, j;

    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }
}

/*EYRESH MEGISTOY KATHE GRAMMHS TOY PINAKA KAI ALLAGH TWN STOIXEIWN TOY.*/
void change_array(int r, int c, int A[r][c], int M[MAX][2])
{
    int i, j;

    for (i=0; i<r; i++) {
            M[i][1]=A[i][0];
            M[i][2]=0;
        for (j=1; j<c; j++) {
            if (A[i][j]>M[i][1]) {
                M[i][1]=A[i][j];
                M[i][2]=j;
            }
        }
        for (j=0; j<c; j++) {
            if (j < M[i][2]) {
                A[i][j] = M[i][1];
            }
        }
    }
}
