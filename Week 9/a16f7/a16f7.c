#include <stdio.h>
#include "simpio.h"
#include "ctype.h"
#include "string.h"


#define size 100


int atoi2(int s, char table[]);


int main() {

int i, j, nSum;
char A[size], Num[size];

/*EISAGWGH ALFARITHMITIKOY, APO TON XRHSTH.*/
printf("DWSE ENA ALFARITHMITIKO: ");
gets(A);

j=0;
/*EYRESH PSHFIWN STO ALFARITHMITIKO A[], ANTIGRAFH STO Num[], KAI EMFANISH.*/
for (i=0; A[i]!='\0'; i++) {
    if (isdigit(A[i])==TRUE) {
        Num[j]=A[i];
        printf(" %c +", Num[j]);
        j++;
    }
}
printf("\b");
Num[j]='\0';

nSum=0;
/*YPOLOGISMOS KAI EMFANISH TOY SYNOLOY TWN PSHFIWN TOY ALFARITHMITIKOY Num[].*/
for (j=0; Num[j]!='\0'; j++) {
    nSum+=(Num[j] - '0');
}

printf("= %d", nSum);

return 0;
}

