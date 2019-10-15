#include <stdio.h>
#include <math.h>
#include "genlib.h"
#include "simpio.h"

#define m 10
#define n 3

void ReadData(int row, int col, double temper[row][col]);
double CalculateAverage(int row, int col, double temper[row][col]);
void CalculateCity(
int row, int col, double temper[row][col], double average[col]);
void CalculateMaxDeviation(double natavg, int row, int col, double temper[row][col], double mdeviation[row]);
void Print(double natavg, int row, double average[row], double mdeviation[row]);

/*Main Program*/
int main()
{
    double temper[m][n];
    double average[m], mdeviation[m];
    double natavg;

	/*Read all Temperatures*/
	ReadData(m, n, temper);

	/*Calculating The Average of all Cities&Temps*/
	natavg=CalculateAverage(m, n, temper);

	/*Calculating Average temp on each City*/
	CalculateCity(m, n, temper, average);

	/*Calculating Standard Deviation & Max Deviation*/
    CalculateMaxDeviation(natavg, m, n, temper, mdeviation);

    /*Printing results*/
    Print(natavg, m, average, mdeviation);

return 0;
}



void ReadData(int row, int col, double temper[row][col])
{
    int i,j;

    for (i=0; i<row; i++)
		for (j=0; j<col; j++)
		  	{ printf("Temp of City %d During %d 8-hour period: ",i,j);
              temper[i][j] = GetReal();
              }
              printf("\n");
}

double CalculateAverage(int row, int col, double temper[row][col])
{
    int i, j;
    double natavg;

    natavg = 0;
    for (i=0; i<row; i++)
      for (j=0; j<col; j+=1)
         natavg += temper[i][j];
    natavg = natavg/(m*n);
    return natavg;
}

void CalculateCity(int row, int col, double temper[row][col], double average[col])
{
    int i, j;

    for (i=0; i<row; i++)
    {
        average[i] = 0;
        for (j=0; j<col; j++)
        {
            average[i] += temper[i][j];
        }
        average[i] = average[i]/n;
    }
}

void CalculateMaxDeviation(double natavg, int row, int col, double temper[row][col], double mdeviation[row])
{
    int i, j;
    double devnat[row][col];

    for (i=0; i<row; i++)
        for (j=0; j<col; j++)
            devnat[i][j] = fabs(natavg-temper[i][j]);

    for (i=0; i<row; i++)
    {
        mdeviation[i] = devnat[i][0];
        for(j=1; j<col; j++)
            if (mdeviation[i]<devnat[i][j]) mdeviation[i] = devnat[i][j];
    }
}

void Print(double natavg, int row, double average[row], double mdeviation[row])
{
    int i;

    printf("NATIONAL TEMPERATURE AVERAGE: %3.1f \n\n", natavg);
    for (i=0; i<row; i+=1)
		printf("City %d - TEMPERATURE AVERAGE: %.1f, MAX DEVIATION:  %.1f\n",i, average[i], mdeviation[i]);
}
