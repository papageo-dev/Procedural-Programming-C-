#include <stdio.h>
#include"simpio.h"

int main() {

    double rate, amount, discount;
    long purchaseAmount;

    printf("DWSE THN AKSIA TOY EMPOREBMATOS. \n");
    purchaseAmount=GetLong();

    printf("DWSE TO POSOSTO EKPTWSHS TOY EMPOREBMATOS. \n");
    rate=GetReal();

    discount = (purchaseAmount*rate);
    printf("TO POSO EKPTWSHS GIA TO SYGKEKRIMENO EMPOREBMA EINAI: %.f2\n", discount);

    amount=(purchaseAmount-discount);
    printf("TO POSO PLHRWMHS EINAI: %g\n", amount);

return 0;
}
