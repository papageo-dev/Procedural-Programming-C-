#include <stdio.h>
#include "simpio.h"
#include "string.h"

void readWriteFile(FILE *infile, FILE *outfile);

int main(){

    FILE *infile;
    FILE *outfile;
    char inputFileName[30], outputFileName[30];

    /*ELEGXOS KAI ANOIGMA ARXEIOY EISODOY GIA ANAGNWSH(r), MESW TOY *infile.*/
    while (TRUE){
        printf("Insert input file's name: ");
        gets(inputFileName);
        infile=fopen(inputFileName, "r");
        if (infile!=NULL) break;
        printf("Cant find the input file %s. Please, try again...\n", inputFileName);
    }
    /*ANOIGMA ARXEIOY EKSODOY GIA EGGRAFH(w), MESW TOY *outfile.*/
    printf("Insert output file's name: ");
    gets(outputFileName);
    outfile=fopen(outputFileName, "w");

    /*DIABASMA ANA XARAKTHRA APO ARXEIO EISODOY(*infile), TROPOPOIHSH KAI GRAPSIMO APOTELESMATOS SE ARXEIO EKSODOY(*outfile).*/
    readWriteFile(infile, outfile);

    /*KLEISISMO ARXEIWN.*/
    fclose(infile);
    fclose(outfile);

return 0;
}


/*SYNARTHSH: DIABASMA ANA XARAKTHRA APO ARXEIO EISODOY(*infile), TROPOPOIHSH KAI GRAPSIMO APOTELESMATOS SE ARXEIO EKSODOY(*outfile).*/
void readWriteFile(FILE *infile, FILE *outfile)
{
    int ch, oldch;

    while ((ch = getc(infile)) != EOF) {
            fprintf(outfile, "%c", oldch);
        if ((oldch==',' || oldch=='.') && ch!=' ') {
            fprintf(outfile, "%c", ' ');
        }
        oldch=ch;
    }
    fprintf(outfile,"%c", '.');
}
