#include <stdio.h>
#include <genlib.h>
#include <time.h>
#include "simpio.h"
#include "string.h"


#define size 100


void MakeAWord(int s, char table[], char table2[]);


int main() {

    char word[size], newWord[size];

    /*EISODOS  ENOS ALFARITHMITIKOY, APO TON XRHSTH.*/
    printf("Word to shuffle: ");
    gets(word);

    /*ANAGRAMMATISMOS TOY ALFARITHMITIKOY KAI EMFANISH.*/
    MakeAWord(size, word, newWord);

    printf("Initial Word: %s, New Word: %s\n", word, newWord);

return 0;
}



/*ENALLAGH TYXAIWN STOIXEIWN TOY table[] KAI APOTHIKEYSH STON table2[].*/
void MakeAWord(int s, char table[], char table2[])
{
    int i, j, tmp;

    /*ANTIGRAFH OLWN TWN STOIXEIWN TOY table[] STON table2[].*/
    for (i=0; table[i]!='\0'; i++) {
        strcpy(table2, table);
    }

    /*ARXIKOPOIHSH THS GENNHTRIAS TYXAIWN ARITHMWN. (OI TIMES EINAI PSEBDOTYXAIES, SYMFWNA ME TO ROLOI TOY PC.)*/
    srand(time(NULL));
    /*OI TYXAIES TIMES POY PAIRNEI TO i, EINAI MESA STA ORIA TOY table2[].*/
    i=rand()%strlen(table2);

    /*ENALLAGH TYXAIWN STOIXEIWN TOY table2[].*/
    for (j=0; table2[j]!='\0'; j++) {
        tmp=table2[j];
        table2[j]=table2[i];
        table2[i]=tmp;
    }
}
