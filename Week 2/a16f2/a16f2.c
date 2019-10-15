#include <stdio.h>
#include "simpio.h"

int main() {

    int sumSms;
    double totalCostSms;

    printf("DWSE TO PLHTHOS TWN SMS POU STALTHIKAN. \n");
    sumSms = GetInteger();

    if (sumSms>=0 && sumSms<=10) {              /*DIAVAZW TON ARITHMO TWN SMS KAI ANALOGA ME AYTO, YPOLOGIZW TO TELIKO KOSTOS.*/
        totalCostSms = (sumSms*2.0)/100;
    }
    else {
        if (sumSms>10 && sumSms<=50) {
            totalCostSms = ((10*2.0)+(sumSms-10)*1.5)/100;
        }
        else {
            if (sumSms>50 && sumSms<=100) {
                totalCostSms = ((10*2.0)+(50*1.5)+(sumSms-60)*1.2)/100;
            }
            else {
                if (sumSms>100) {
                    totalCostSms =((10*2.0)+(50*1.5)+(100*1.2)+(sumSms-160)*1)/100;
                }
            }
        }
    }

    printf("TO SYNOLIKO POSO PLHRWMHS EINAI: %f\n", totalCostSms);                /*EMFANISH TELIKOY KOSTOYS.*/

return 0;
}
