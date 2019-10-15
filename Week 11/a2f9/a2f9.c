#include <stdio.h>
#include "simpio.h"
#include <string.h>

#define M 100

/*DOMES/EGGRAFES*/
typedef struct
{
    char name[30];
    int apousies;
}studentT;

/*SYNARTHSEIS/DIADIKASIES*/
void readInputFile(FILE *infile, studentT students[], int *pApousies, int *pStudent);
void writeOutput(FILE* outfile, int size, studentT students[], int total);

int main() {

    FILE *inFile, *outFile;
    char inputFileName[100], outputFileName[100];
    studentT students[M];
    int pApousies, pStudent;

    /*ANOIGMA ARXEIOY EISODOY, MESW TOY *inFile.*/
    while (TRUE) {
        printf("DWSE TO ONOMA TOY ARXEIOY EISODOY: ");
        gets(inputFileName);

        inFile=fopen(inputFileName, "r");

        if (inFile!=NULL) break;
        printf("Cannot open input file %s. Try again.\n", inputFileName);
    }

    /*ANOIGMA ARXEIOY EKSODOY, MESW TOY *outFile.*/
    printf("DWSE TO ONOMA TOY ARXEIOY EKSODOY: ");
    gets(outputFileName);
    outFile=fopen(outputFileName, "w");

    /*DIABASMA APO TO ARXEIO EISODOY *inFile. YPOLOGISMOS TOY PLHTHOYS TWN MATHITWN ME PERISSOTERES APO 100 APOUSIES KAI ENHMERWSH DOMHS(studentsT)*/
    readInputFile(inFile, students, &pApousies, &pStudent);

    /*GRAPSIMO APTELESMATWN STO ARXEIO EKSODOY *outfile.*/
    writeOutput(outFile, pApousies, students, pStudent);

    /*KLEISIMO ARXEIWN.*/
    fclose(inFile);
    fclose(outFile);

return 0;
}



void readInputFile(FILE *infile, studentT students[], int *pApousies, int *pStudent)
{
    char name[30], comments[68], termch;
    int apousies, nscan, line;

    *pApousies=0;
    *pStudent=0;
    line=0;

    while (TRUE) {
        nscan=fscanf(infile, "%30[^,], %d, %68[^\n]%c", name, &apousies, comments, &termch);

        if (nscan==EOF) break;
        line++;
        if (nscan!=4 || termch!='\n') {
            printf("Error in line %d. Program termination...\n", line);
            exit(1);
        }
        if (apousies>100) {
            strcpy(students[*pApousies].name, name);
            students[*pApousies].apousies = apousies;
            (*pApousies)++;
    }
    (*pStudent)++;
    }
}


void writeOutput(FILE* outfile, int size, studentT students[], int total)
{
    int i;

    fprintf(outfile, "%-30s%-9s\n", "ONOMATEPWNYMO", "APOUSIES");

    for (i=1; i<=39; i++) {
        fputc('-', outfile);
    }
    fputc('\n', outfile);

    for (i=0; i<size; i++) {
        fprintf(outfile, "%-30s%9d\n", students[i].name, students[i].apousies);
    }

    for (i=1; i<=39; i++) {
        fputc('-', outfile);
    }
        fputc('\n', outfile);

        fprintf(outfile, "%-30s%9d\n", "SYNOLO MATHITWN:", total);
        fprintf(outfile, "%-30s%9d\n", "SYNOLO APONTWN:", size);
}
