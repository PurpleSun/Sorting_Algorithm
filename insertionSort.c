/*
	Filename: insertionSort.c
	Author: Tony Zeng
	Mail: laoweiyeah@gmail.com
	Function: implement of insertion sorting algorithm
	Time: 2013-6-23 21:35:22
*/
#include <stdio.h>
#include "array.h"

void insertionSort(int* array, int count)
{
	int temp;
	for (int i = 1; i < count; ++i)
	{
		for (int j = i-1; j >= 0; --j)
		{
			if (array[i] < array[j])
			{
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
				--i;
			}
		}
	}
}

void insertionSort_fromWiki(int* array, int first, int last)
{
	int i, j;
	int temp;
	for (i = first + 1; i <= last; ++i)
	{
		temp = array[i];
		j = i - 1;
		while ((j >= first) && (array[j] > temp))
		{
			array[j+1] = array[j];
			j--;
		}
		array[j+1] = temp;
	}
}

int main(int argc, char** args)
{
	printArray(array, length);
	//insertionSort(array, length);
	insertionSort_fromWiki(array, 0, length-1);
	printArray(array, length);
	if (!checkArray(array, length))
	{
		printf("Error occured!\n");
	}

	return 0;
}