#include <stdio.h>
#include "simpio.h"
#include "string.h"


#define size 70


/*AFAIRESH KENWN XARAKTHRWN(' ') APO TO E-MAIL.*/
void deleteSpace(int s, char table[]);


int main() {

    int i, j;
    char email[size], name[size], mServer[size];

    /*DIABASMA E-MAIL APO TON XRHSTH.*/
    printf("PLHKTROLOGISTE TO E-MAIL SAS: ");
    gets(email);

    /*AFAIRESH KENWN XARAKTHRWN(' ') APO TON email[], EAN YPARXOYN.*/
    deleteSpace(size, email);

    /*ANTIGRAFH TWN XARAKTHRWN APO TON email[] STON name[], MEXRI TO '@'.*/
    for (i=0; email[i]!='@'; i++) {
            name[i]=email[i];
    }
    name[i]='\0';

    /*EMFANISH ONOMATOS XRHSTH.*/
    printf("ONOMA XRHSTH: %s\n", name);

    /*KLHSH THS strlen(), KAI EMFANISH MHKOYS TOY ONOMATOS XRHSTH(name[]).*/
    printf("MHKOS ONOMATOS XRHSTH: %d\n", strlen(name));

    /*ANTIGRAFH TWN XARAKTHRWN APO TON email[], STON mServer[], META TO '@'.*/
    i++;
    for (j=0; email[i]!='\0'; j++) {
        mServer[j]=email[i];
        i++;
    }
    mServer[j]='\0';

    /*EMFANISH TOY MAIL SERVER.*/
    printf("MAIL SERVER: %s\n", mServer);

return 0;
}


/*AFAIRESH KENWN XARAKTHRWN(' ') APO TO E-MAIL.*/
void deleteSpace(int s, char table[])
{
    int i, j;

    j=0;
    for (i=0; i<strlen(table); i++) {
        if (table[i]!=' ') {
            table[j]=table[i];
            j++;
        }
    }
    table[j]='\0';
}
