/*
	Filename: quickSort.c
	Author: Tony Zeng
	Mail: laoweiyeah@gmail.com
	Function: implement quick sorting algorithm
	Time: 2013-6-20 20:44:23
*/
#include <stdio.h>
#include "array.h"

void quickSort(int* array, int low, int hight)
{
	if (low >= hight)
	{
		return;
	}

	int i = low;
	int j = hight;
	int x = array[i];

	while (i < j)
	{
		for (; j>i; --j)
		{
			if (array[j] < x)
			{
				array[i] = array[j];
				++i;
				break;
			}
			
		}
		for (; i<j; ++i)
		{
			if (array[i] > x)
			{
				array[j] = array[i];
				--j;
				break;
			}
			
		}
	}
	array[i] = x;
	quickSort(array, low, i-1);
	quickSort(array, i+1, hight);
}

int main (int argc, char** args)
{	
	printArray(array, length);
	quickSort(array, 0, length-1);
	printArray(array, length);
	if (!checkArray(array, length))
	{
		printf("Error occured!\n");
	}

	return 0;
}