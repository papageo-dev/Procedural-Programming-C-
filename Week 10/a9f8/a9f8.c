#include <stdio.h>
#include "simpio.h"


#define N 100


/*EGGRAFES/DOMES*/
typedef struct
{
    char name[50];
    char surname[50];
    double salaryPerHour;
    int hours;
    double grossEarnings;
    double dedutions;
    double tax;
    double netEarnings;
}teachersT;


/*SYNARTHSEIS/DIADIKASIES*/
void get_data(int size, teachersT teachers[], int teachersSum);
void calc_salaries(int size, teachersT teachers[], int teachersSum);
void printData(int size, teachersT teachers[], int teachersSum);


/*KYRIWS PROGRAMMA*/
int main(){

    teachersT teachers[N];
    int teachersSum;

    /*EISAGWGH TOY PLHTHOYS TWN KATHIGITWN.*/
    printf("DWSE TON ARITHMO TWN KATHIGITWN: ");
    teachersSum=GetInteger();

    /*EISAGWGH TWN STOIXEIWN, TOY MISTHOY KAI TWN WRWN ERGASIAS, GIA KATHE KATHIGITI.*/
    get_data(N, teachers, teachersSum);

    /*YPOLOGISMOS MIKTWN KAI KATHARWN APODOXWN, KRATHSEWN KAI FOROY, GIA KATHE KATHIGITI.*/
    calc_salaries(N, teachers, teachersSum);

    /*SYNARTHSH: EMFANISH ANALYTIKHS KATASTASHS GIA KATHE KATHIGITI.*/
    printData(N, teachers, teachersSum);

return 0;
}



/*SYNARTHSH: EISAGWGH TWN STOIXEIWN, TOY MISTHOY KAI TWN WRWN ERGASIAS, GIA KATHE KATHIGITI.*/
void get_data(int size, teachersT teachers[], int teachersSum)
{
    int i;

    for (i=0; i<teachersSum; i++) {
        printf("\nDWSE TA STOIXEIA TOY KATHIGITI %d\n", i);

        printf("DWSE ONOMA: ");
        gets(teachers[i].name);

        printf("DWSE EPONYMO: ");
        gets(teachers[i].surname);

        printf("DWSE MISTHO ANA WRA: ");
        teachers[i].salaryPerHour=GetReal();

        printf("DWSE WRES ERGASIAS: ");
        teachers[i].hours=GetInteger();
    }
}

/*SYNARTHSH: YPOLOGISMOS MIKTWN KAI KATHARWN APODOXWN, KRATHSEWN KAI FOROY, GIA KATHE KATHIGITI.*/
void calc_salaries(int size, teachersT teachers[], int teachersSum)
{
    int i;

    for(i=0; i<teachersSum; i++){
        teachers[i].grossEarnings=(teachers[i].salaryPerHour*teachers[i].hours);

        teachers[i].dedutions=(teachers[i].grossEarnings*15/100);

        teachers[i].tax=(teachers[i].grossEarnings-teachers[i].dedutions)*7/100;

        teachers[i].netEarnings=(teachers[i].grossEarnings-teachers[i].dedutions-teachers[i].tax);
    }
}


/*SYNARTHSH: EMFANISH ANALYTIKHS KATASTASHS GIA KATHE KATHIGITI.*/
void printData(int size, teachersT teachers[], int teachersSum)
{
    int i;

    printf("\n\n");
    printf("%-15s %-20s %-15s %-14s %-7s %-14s %-7s %-8s\n",
           "Name", "Surname", "Hourly Rate", "Hours Worked", "Gross", "Deductions", "Tax", "Net");

    for (i=0; i<=101; i++) {
        printf("-");
    }
        printf("\n");

    for (i=0; i<teachersSum; i++) {
        printf("%-15s %-20s %11.2f %16d %7.2f %12.2f %7.2f %7.2f\n",
               teachers[i].name,
               teachers[i].surname,
               teachers[i].salaryPerHour,
               teachers[i].hours,
               teachers[i].grossEarnings,
               teachers[i].dedutions,
               teachers[i].tax,
               teachers[i].netEarnings);
    }

    for (i=0; i<=101; i++) {
        printf("-");
    }
}
