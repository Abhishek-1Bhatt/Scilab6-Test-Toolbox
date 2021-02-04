#include<stdio.h>
#include<stdlib.h>
#include "trans.h"

int main(void)
{
	//double arr[3][4] = {{2, 5, 0, 9}, {3, 7, 8, 11}, {4, 7, 6, 2}};
	double arr[5][3] = {{45, 8, 9}, {7, 6, 1}, {89, 4, 5}, {66, 79, 23}, {12, 63, 41}};
	int rows = sizeof(arr)/sizeof(arr[0]);
	int columns = sizeof(arr[0])/sizeof(arr[0][0]);
	double **answ;
	answ = (double**)malloc(sizeof(double*)*rows);
	for(int i=0; i<rows; i++)
	{
		answ[i] = (double*)malloc(sizeof(double)*columns);
	}
	//printf("Inside main, before function call.\n");
	trans((double *)arr, (double *)answ, rows, columns);
	//printf("Inside main, after function call.\n");
	return 0;
}
