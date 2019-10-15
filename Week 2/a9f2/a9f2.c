#include <stdio.h>
#include "simpio.h"

int main(){

    int code, quantity, sellPrice;
    double discount, finalPrice;

    printf("DWSE TON KWDIKO TOY PROIONTOS. \n");
    code = GetInteger();

    sellPrice=0;                                               /*MIDENISMOS KAI YPOLOGISMOS THS TIMHS PWLHSHS.*/

    while (code>0) {
        sellPrice+=code % 100;
        code/=100;
    }

    printf("DWSE TON ARITHMO TEMAXIWN TOY PROIONTOS. \n");      /*EISAGWGH TOY PLHTHOYS TEMAXIWN.*/
    quantity = GetInteger();

    if(quantity>=1 && quantity<=30) {                           /*YPOLOGISMOS THS EKPTWSHS GIA TO PLHTHOS TWN TEMAXIWN.*/

        discount = (sellPrice*0.10)*quantity;
    }
    else if (quantity>=31 && quantity<=70) {

        discount = (sellPrice*0.20)*quantity;
    }
    else if (quantity >= 71) {

        discount = (sellPrice*0.35)*quantity;
    }

    finalPrice = (sellPrice*quantity)-discount;                /*YPOLOGISMOS TELIKHS TIMHS THS PARAGGELIAS.*/

    printf("H TIMH PWLHSHS TOY PROIONTOS EINAI: %d \n", sellPrice);
    printf("H EKPTWSH GIA TO SYGKEKRIMENO PROION EINAI: %g \n", discount);   /*EMFANISH TIMHS PWLHSHS, EKPTWSHS KAI TELIKHS TIMHS THS PARAGGELIAS.*/
    printf("H TELIKH TIMH THS PARAGGELIAS EINAI: %g \n", finalPrice);

    return 0;
}
