#include <stdio.h>
#include "simpio.h"

#define lines 4
#define columns 5


int main() {

    long sumColl[lines];
    float sumSupply[lines];
    int i, j, soldQuant[columns], sales[lines][columns] = {{10, 4, 5, 6, 7},
                                                           {7, 0, 12, 1, 3},
                                                           {4, 9, 5, 0, 8},
                                                           {3, 2, 1, 5, 6}};


        /*YPOLOGISMOS TOY SYNOLIKOY POSOY EISPRAKSHS, GIA KATHE PWLHTH.*/
        for (i=0; i<lines; i++) {
            sumColl[i]=0;
        }
            sumColl[0]=(sales[0][0]*25000)+(sales[0][1]*15000)+(sales[0][2]*32000)+(sales[0][3]*21000)+(sales[0][4]*9200);
            sumColl[1]=(sales[1][0]*25000)+(sales[1][1]*15000)+(sales[1][2]*32000)+(sales[1][3]*21000)+(sales[1][4]*9200);
            sumColl[2]=(sales[2][0]*25000)+(sales[2][1]*15000)+(sales[2][2]*32000)+(sales[2][3]*21000)+(sales[2][4]*9200);
            sumColl[3]=(sales[3][0]*25000)+(sales[3][1]*15000)+(sales[3][2]*32000)+(sales[3][3]*21000)+(sales[3][4]*9200);
            sumColl[4]=(sales[4][0]*25000)+(sales[4][1]*15000)+(sales[4][2]*32000)+(sales[4][3]*21000)+(sales[4][4]*9200);


        /*YPOLOGISMOS THS SYNOLIKHS PROMITHEIAS, GIA KATHE PWLHTH.*/
        for (i=0; i<lines; i++) {
            sumSupply[i]=0;
            sumSupply[i]=(sumColl[i]*0.10);
        }


        /*YPOLOGISMOS TWN SYNOLIKWN POSOSTHTWN POY POULHTHIKAN, GIA KATHE PROION.*/
        for (j=0; j<columns; j++) {
            soldQuant[j]=0;
        }
                soldQuant[0]=(sales[0][0]+sales[1][0]+sales[2][0]+sales[3][0]+sales[4][0]);
                soldQuant[1]=(sales[0][1]+sales[1][1]+sales[2][1]+sales[3][1]+sales[4][1]);
                soldQuant[2]=(sales[0][2]+sales[1][2]+sales[2][2]+sales[3][2]+sales[4][2]);
                soldQuant[3]=(sales[0][3]+sales[1][3]+sales[2][3]+sales[3][3]+sales[4][3]);
                soldQuant[4]=(sales[0][4]+sales[1][4]+sales[2][4]+sales[3][4]+sales[4][4]);


        /*EKTYPWSH APOTELESMATWN.*/
        printf("SYNOLIKO POSO EISPRAKSHS / PWLHTH: %ld %ld %ld %ld \n", sumColl[0], sumColl[1], sumColl[2], sumColl[3]);
        printf("SYNOLIKH PROMITHEIA/PWLHTH: %.2f %.2f %.2f %.2f \n", sumSupply[0], sumSupply[1], sumSupply[2], sumSupply[3]);
        printf("POSOTHTES PROIONTWN: %d %d %d %d %d \n", soldQuant[0], soldQuant[1], soldQuant[2], soldQuant[3], soldQuant[4]);

return 0;
}
