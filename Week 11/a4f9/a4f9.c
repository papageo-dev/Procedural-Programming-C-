#include <stdio.h>
#include "simpio.h"
#include "string.h"

#define N 100

/*DOMES/EGGRAFES*/
typedef struct
{
    int code;
    char name[25];
    long totalCost;
    long supply;
}sellerT;

/*SYNARTHSEIS/DIADIKASIES*/
void readWriteFile(FILE *infile, sellerT seller[], FILE *outfile);

/*KYRIWS PROGRAMMA*/
int main() {

    FILE *infile, *outfile;
    char inputFileName[N], outputFileName[N];
    sellerT seller[N];

    /*EPILOGH KAI ANOIGMA TOY ARXEIOY EISODOY.*/
    while (TRUE) {
        printf("Please insert the name of input file: ");
        gets(inputFileName);
        infile=fopen(inputFileName, "r");
        if (infile!=NULL) break;
        printf("Cannot open input file %s. Try again...", inputFileName);
    }

    /*EPILOGH KAI ANOIGMA TOY ARXEIOY EKSODOY.*/
    printf("Please insert the name of output file: ");
    gets(outputFileName);
    outfile=fopen(outputFileName, "w");

    /*DIABASMA DEDOMENWN APO ARXEIO, MESW TOY *infile.
    YPOLOGISMOS PROMHTHEIAS(supply) KAI ENHMERWSH DOMHS(sellerT).
    EGGRAFH DEDOMENWN SE ARXEIO EKSOSOY, MESW *outfile.*/
    readWriteFile(infile, seller, outfile);

    /*KLEISIMO ARXEIWN.*/
    fclose(infile);
    fclose(outfile);

return 0;
}



/*SYNARTHSH: DIABASMA DEDOMENWN APO ARXEIO, MESW TOY *infile.
    YPOLOGISMOS PROMHTHEIAS(supply) KAI ENHMERWSH DOMHS(sellerT).
    EGGRAFH DEDOMENWN SE ARXEIO EKSOSOY, MESW *outfile.*/
void readWriteFile(FILE *infile, sellerT seller[], FILE *outfile)
{
    int i, j, nscan, line, code;
    char name[25], termch;
    long totalCost, supply;

    line=0;
    supply=0;
    i=0;

    /*DIABASMA APO ARXEIO GRAMMH-GRAMMH.*/
    while (TRUE) {
        nscan=fscanf(infile, "%d, %25[^,], %ld%c", &code, name, &totalCost, &termch);

        if (nscan==EOF) break;
         line++;

         if (nscan!=4 || termch!='\n') {
            printf("Error in line %d. Program termination.\n", line);
            exit(1);
         }
         /*YPOLOGISMOS POSOY PROMHTHEIAS PWLHTH(supply).*/
         if (code==11) {
            supply=totalCost*3/100;
         }
         else if (code==12) {
            supply=totalCost*5/100;
         }
         else if (code==13) {
            supply=totalCost*8/100;
         }
         else if (code==14) {
            supply=totalCost*11/100;
         }

         /*ENHMERWSH DOMHS(sellerT).*/
         seller[i].code=code;
         strcpy(seller[i].name, name);
         seller[i].supply=supply;
         seller[i].totalCost=totalCost;
         i++;
    }

    /*EGGRAFH DEDOMENWN APO THN DOMH(sellerT), SE ARXEIO EKSODOY, MESW TOY *outfile.*/
    for (j=0; j<i; j++) {
        fprintf(outfile, "%-25s%-25s\n", "ONOMATEPWNYMO PWLHTH:  ", seller[j].name);
            fprintf(outfile, "%-5s%-5ld\n", "POSO PROMHTHEIAS PWLHTH: ", seller[j].supply);
    }
}


