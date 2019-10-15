#include <stdio.h>
#include "simpio.h"

#define n 5

int main() {

    int A[n], i;

    for (i=0; i<n; i++) {
        printf("Enter Number: ");
        A[i]=GetInteger();
    }

    printf("%d ", A[4]);

    for (i=0; i<n-1; i++) {
        printf("%d ", A[i]);
    }

return 0;
}
