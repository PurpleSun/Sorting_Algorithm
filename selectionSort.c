/*
	Filename: selectionSort.c
	Author: Tony Zeng
	Mail: laoweiyeah@gmail.com
	Function: implement selection sorting algorithm
	Time: 2013-6-21 13:46:11
*/
#include <stdio.h>
#include "array.h"

void selectionSort(int* array, int length)
{
	int temp;
	for (int i = 0; i < length-1; ++i)
	{
		for (int j = i+1; j < length; ++j)
		{
			if (array[j] < array[i])
			{
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
			}
		}
	}
}

int main(int argc, char** args)
{
	printArray(array, length);
	selectionSort(array, length);
	printArray(array, length);
	if (!checkArray(array, length))
	{
		printf("Error occured!\n");
	}

	return 0;
}