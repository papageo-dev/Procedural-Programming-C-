#include <stdio.h>
#include "simpio.h"
#include "string.h"

#define MaxSize 100

/*DOMES/EGGRAFES*/
 typedef struct{
     char owner[40];
     long balance;
     float rate;
     int year;
 }accountT;

/*SYNARTHSEIS/DIADIKASIES*/
int readData(accountT table[]);
int compareDeposits(accountT newData[], int newSize, accountT oldData[], int oldSize, accountT missing[]);
void milleniumAcc(accountT newData[],int newSize);
int balanceSum(accountT tabData[], int tabSize);
void calcMaxBal(accountT tabData[], int tabSize, char maxOwner[], int *year);


/*KYRIWS PROGRAMMA*/
int main() {

    accountT newData[MaxSize], oldData[MaxSize], missing[MaxSize];
    int i, newSize, oldSize, mSize, newBSum, oldBSum, newYMax, oldYMax;
    char maxNOwner[30], maxOOwner[30];

    /*DIABASMA APO TA ARXEIA.*/
    newSize=readData(newData);
    oldSize=readData(oldData);

    /*SYGKRINSH PERIEXOMENOY DYO ARXEIWN KAI EMFANISH AYTWN POY DEN EMAFANIZONTAI SE KAI TA DYO.*/
    mSize=compareDeposits(newData, newSize, oldData, oldSize, missing);
    printf("\n Clients in List New, but not in Old \n");
    for(i=0;i<mSize;i++) {
        printf("- %s, %ld \n", missing[i].owner, missing[i].balance);
    }

    /*GRAPSIMMO LOGARIASMWN POY ANOIXTHKA TO 2000 KAI META, SE ARXEIO.*/
    milleniumAcc(newData,newSize);

    /*YPOLOGISMOS KAI EMFANISH TOY 40% TOY SYNOLOY TWN KATATHESEWN, APO ARXEIA.*/
    newBSum=balanceSum(newData, newSize);
    printf("\nTO 40%% TOY SYNOLOY TWN KATATHESEWN APO TO ARXEIO 'Bank_new.dat' EINAI: %d\n", newBSum);
    oldBSum=balanceSum(oldData, oldSize);
    printf("TO 40%% TOY SYNOLOY TWN KATATHESEWN APO TO ARXEIO 'Bank_old.dat' EINAI: %d\n", oldBSum);

    /*YPOLOGISMOS MEGALYTERHS KATATHESHS SE KATHE ARXEIO KAI EMFANISH ONOMATOS KAI ETOYS EGGRAFHS TOY KATATHETH.*/
    calcMaxBal(newData, newSize, maxNOwner, &newYMax);
    printf("\nMEGALYTERH KATATHESH STO ARXEIO 'bank_new.dat':\n%s, %d\n", maxNOwner, newYMax);
    calcMaxBal(oldData, oldSize, maxOOwner, &oldYMax);
    printf("MEGALYTERH KATATHESH STO ARXEIO 'bank_old.dat':\n%s, %d\n", maxOOwner, oldYMax);

return 0;
}



/*SYNARTHSH: DIABASMA PERIEXOMENOY ARXEIOY, ME SYGKEKRIMENH MORFOPOIHSH.*/
int readData(accountT table[])
{
    FILE *infile;
    char inputFileName[30];

    char termch;
    int nscan, count;

    count=0;

    while (TRUE) {
        printf("Input file name: ");
        gets(inputFileName);
        infile=fopen(inputFileName, "r");
        if (infile!=NULL) break;
        printf("Cannot open file: %s. Please, try again!\n", inputFileName);
    }

    while (TRUE) {
        nscan = fscanf(infile, "%40[^,], %ld, %f, %d%c", table[count].owner, &table[count].balance, &table[count].rate, &table[count].year, &termch);

        if (nscan == EOF) break;
        if (nscan!=5 || termch!='\n') {
            printf("Line Error in file %s.", inputFileName);
        }
        else {
            count++;
        }
    }
    fclose(infile);
    return count;
}


/*SYNARTHSH: SYGKRINSH DEDOMENWN APO 2 ARXEIA.*/
int compareDeposits(accountT newData[], int newSize, accountT oldData[], int oldSize, accountT missing[])
{
    int i, j, count, flag;

    count=0;

    for (i=0; i<newSize; i++) {
        flag=0;
        for (j=0; j<oldSize; j++) {
            if (strcmp(newData[i].owner, oldData[j].owner)==0) {
                flag=1;
                break;
            }
        }
        if (flag==0) missing[count++]=newData[i];
    }
    return count;
}


/*SYNARTHSH: GRAPSIMMO SE ARXEIO, ME SYGKEKRIMENH MORFOPOIHSH.*/
void milleniumAcc(accountT newData[],int newSize)
{
    FILE *outfile;
    int i;

    outfile=fopen("mztfgm.dat", "w");

    for (i=0; i<newSize; i++) {
        if (newData[i].year>=2000) {
            fprintf(outfile, "%s, %ld, %f, %d\n", newData[i].owner, newData[i].balance, newData[i].rate, newData[i].year);
        }
    }
    fclose(outfile);
}


/*SYNARTHSH: YPOLOGISMOS TOY 40% TOY ATHROISMATOS.*/
int balanceSum(accountT tabData[], int tabSize)
{
    int i, sum;

    sum=0;

    for (i=0; i<tabSize; i++) {
        sum+=tabData[i].balance;
    }
    return sum*0.40;
}


/*EYRESH TOY MAX KAI EPISTOFH POLLWN STOIXEIWN, ME DEIKTES.*/
void calcMaxBal(accountT tabData[], int tabSize, char maxOwner[], int *year)
{
    long max;
    int i;

    max=tabData[0].balance;
    *year=tabData[0].year;
    strcpy(maxOwner, tabData[0].owner);

    for (i=0; i<tabSize; i++) {
        if (tabData[i].balance>max) {
            max=tabData[i].balance;
            *year=tabData[i].year;
            strcpy(maxOwner, tabData[i].owner);
        }
    }
}
