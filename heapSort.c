/*
	Filename: heapSort.c
	Author: Tony Zeng
	Mail: laoweiyeah@gmail.com
	Function: implement of heap sorting algorithm
	Time: 2013-6-23 22:57:54
*/
#include <stdio.h>
#include "array.h"

void heapSort(int* array, int count)
{
	int temp;
	for (int j = count - 1; j > 0; --j)
	{
		for (int i = j; i > 0; --i)
		{
			if (array[i] > array[(i-1)/2])
			{
				temp = array[i];
				array[i] = array[(i-1)/2];
				array[(i-1)/2] = temp;
			}
		}
		temp = array[0];
		array[0] = array[j];
		array[j] = temp;
	}
}

int main(int argc, char** args)
{
	printArray(array, length);
	heapSort(array, length);
	printArray(array, length);
	if (!checkArray(array, length))
	{
		printf("Error occured!\n");
	}

	return 0;
}