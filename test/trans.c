#include<stdio.h>
#include<stdlib.h>
#include "trans.h"

int trans(double *arr,  double *answ, int rows, int columns)
{
	printf("No. of rows: %d\nNo. of columns: %d\n", rows, columns);
	printf("The input matrix is : \n");
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<columns; j++)
		{
			printf("%f ", *((arr+i*columns)+j));
		}
		printf("\n");
	}
	printf("The transpose of this matrix is: \n");
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<columns; j++)
		{
			*((answ+j*rows)+i) = *((arr+i*columns)+j);
		}
	}
	for(int i=0; i<columns; i++)
	{
		for(int j=0; j<rows; j++)
		{
			printf("%f ", *((answ+i*rows)+j));
		}
		printf("\n");
	}
	return 0;
}

