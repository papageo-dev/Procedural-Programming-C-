#include <stdio.h>
#include "simpio.h"
#include "string.h"
#include <genlib.h>


#define N 20


/*DOMES/EGGRAFES*/
typedef struct
{
    int number;
    char type[N];
    int cc;
    char name[N];
    int days;
    float dailyCost;
    float totalCost;
}carRentalT;

typedef struct
{
    char type[N];
    int cc;
    float amount;
}bestCarT;


/*SYNARTHSEIS/DIADIKASIES*/
int getData(int size, carRentalT table[]);
float calcTotals(int size, carRentalT table[], int num_rentals);
bestCarT findBest(int size, carRentalT table[], int num_rentals);
void printData(int size, carRentalT table[], bestCarT bestCar, float total, int num_rentals);


/*KYRIWS PROGRAMMA*/
int main() {

    carRentalT rentals[N];
    int num_rentals;
    float total;
    bestCarT bestCar;

    /*EISAGWGH TOY ARITHMOY TWN ENOIKIASTWN(num_rentals) KAI TWN STOIXEIWN KATHE ENOIKIASTH.*/
    num_rentals=getData(N, rentals);

    /*YPOLOGISMOS TOY SYNOLIKOY KOSTOYS GIA KATHE ENOIKIASTH KAI TOY GENIKOY SYNOLIKOY KOSTOYS.*/
    total=calcTotals(N, rentals, num_rentals);

    /*EYRESH THS ENOIKIASHS ME TO MEGALYTERO KERDOS(type, cc, amount).*/
    bestCar=findBest(N, rentals, num_rentals);

    /*EMFANISH ANALYTIKHS KATASTASHS GIA KATHE ENOIKIASH KAI EMFANISH STOIXEIWN GIA THN ENOIKIASH ME TO MEGALYTERO KERDOS.*/
    printData(N, rentals, bestCar, total, num_rentals);

return 0;
}



/*SYNATHSH: EISAGWGH TOY ARITHMOY TWN ENOIKIASTWN(num_rentals) KAI TWN STOIXEIWN KATHE ENOIKIASTH.*/
int getData(int size, carRentalT table[])
{
    int i, rentalsNum;

    printf("DWSE TON ARITHMO TWN ENOIKIASEWN: ");
    rentalsNum=GetInteger();


    for (i=0; i<rentalsNum; i++) {
        printf("\nDWSE TA STOIXEIA THS ENOIKIASHS %d\n", i);
        table[i].number=i;

        printf("DWSE THN MARKA TOY AYTOKINHTOY: ");
        gets(table[i].type);

        printf("DWSE TA KYBIKA TOY AYTOKINHTOY: ");
        table[i].cc=GetInteger();

        printf("DWSE TO ONOMA TOY ENOIKIASTH: ");
        gets(table[i].name);

        printf("DWSE TIS HMERES ENOIKIASHS: ");
        table[i].days=GetInteger();

        printf("DWSE TIMH ANA HMERA: ");
        table[i].dailyCost=GetReal();
    }

    return rentalsNum;
}


/*SYNARTHSH: YPOLOGISMOS TOY SYNOLIKOY KOSTOYS GIA KATHE ENOIKIASTH KAI TOY GENIKOY SYNOLIKOY KOSTOYS.*/
float calcTotals(int size, carRentalT table[], int num_rentals)
{
    int i;
    float total;

    for (i=0; i<num_rentals; i++) {
        table[i].totalCost=(table[i].dailyCost*table[i].days);
    }

    for (i=0; i<num_rentals; i++) {
        total+=table[i].totalCost;
    }
    return total;
}


/*SYNARTHSH: EYRESH THS ENOIKIASHS ME TO MEGALYTERO KERDOS(type, cc, amount).*/
bestCarT findBest(int size, carRentalT table[], int num_rentals)
{
    int i;
    bestCarT best;

    strcpy(best.type, table[0].type);
    best.cc=table[0].cc;
    best.amount=table[0].totalCost;

    for (i=0; i<num_rentals; i++) {
        if (best.amount<table[i].totalCost) {
            strcpy(best.type, table[i].type);
            best.cc=table[i].cc;
            best.amount=table[i].totalCost;
        }
    }
    return best;
}

/*SYNARTHSH: EMFANISH ANALYTIKHS KATASTASHS GIA KATHE ENOIKIASH KAI EMFANISH STOIXEIWN GIA THN ENOIKIASH ME TO MEGALYTERO KERDOS.*/
void printData(int size, carRentalT table[], bestCarT bestCar, float total, int num_rentals)
{
    int i;

    printf("\n\n");
    printf("%-7s %-20s %-10s %-5s %-5s %-6s %-8s\n",
           "Number", "Name", "Type", "CC", "Days", "Price", "Total");

    for (i=0; i<=73; i++) {
        printf("-");
    }
        printf("\n");

    for (i=0; i<num_rentals; i++) {
        printf("%-7d %-20s %-10s %-5d %-5d %-6.02f %-8.02f\n",
               table[i].number,
               table[i].name,
               table[i].type,
               table[i].cc,
               table[i].days,
               table[i].dailyCost,
               table[i].totalCost);
    }

    for (i=0; i<=73; i++) {
        printf("-");
    }
        printf("\n");

    printf("%58s %-8.02f\n", "Total", total);
    printf("Best Car: %s %d rented for %.2f Euros.\n", bestCar.type, bestCar.cc, bestCar.amount);
}
