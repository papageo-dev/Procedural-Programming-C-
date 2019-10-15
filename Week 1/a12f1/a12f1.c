#include <stdio.h>
#include "simpio.h"

int main() {

    int kTM, mTM;
    double DT, DF;

    printf("DWSE TA KATHARA TM TOY SPITIOY. \n");
    kTM = GetInteger();

    printf("DWSE TA MIKTA TM TOY SPITIOY. \n");
    mTM = GetInteger();

    DT = (kTM*1.33)*(61/365.0);
    printf("TA DT EINAI: %.2f \n", DT);

    DF = (mTM*0.13)*(61/365.0);
    printf("TA DF EINAI: %.2f \n", DF);

    return 0;
}
