#include <stdio.h>
#include "simpio.h"

void readWriteFile(FILE *infile, FILE *outfile);

int main() {

    FILE *infile, *outfile;
    char fileName[30];

    /*ANOIGMA ARXEIOY GIA DIABASMA, BASH ONOMATOS.*/
    while (TRUE) {
        printf("Input file name: ");
        gets(fileName);
        infile=fopen(fileName, "r");
        if (infile!=NULL) break;
        printf("Cannot find file: %s. Try again...\n", fileName);
    }

    /*ANOIGMA ARXEIOY GIA GRAPSIMO.*/
    outfile=fopen("o1f9.dat", "w");

    /*ANTIGRAFH APO TO infile STO outfile, XWRIS SYNEXOMENA KENA.*/
    readWriteFile(infile, outfile);

    /*KLEISIMO ARXEIWN.*/
    fclose(infile);
    fclose(outfile);

return 0;
}

/*SYNARTHSH: ANTIGRAFH APO TO infile STO outfile, XWRIS SYNEXOMENA KENA.*/
void readWriteFile(FILE *infile, FILE *outfile)
{
    int ch;

    while (TRUE) {
        ch = getc(infile);
        if (ch == EOF) break;

        if (ch!=' ') {
            putc(ch, outfile);
        }
    }

    fclose(outfile);
}
