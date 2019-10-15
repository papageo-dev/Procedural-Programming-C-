#include <stdio.h>
#include"simpio.h"

int main() {

    long epEs, epEx;
    double sendCost;

    printf("DWSE TON ARITHMO EPISTOLWN ESWTERIKOY. \n");
    epEs=GetLong();

    printf("DWSE TON ARITHMO EPISTOLWN EXWTERIKOY. \n");
    epEx=GetLong();

    sendCost=((epEs*0.30)+(epEx*0.80));
    printf("TO SYNOLIKO KOSTOS APOSTOLHS EINAI: %.2f\n", sendCost);

return 0;
}
