/*
	Filename: bubbleSort.c
	Author: Tony Zeng
	Mail: laoweiyeah@gmail.com
	Function: implement of bubble sorting algorithm
	Time: 2013-6-3 16:01:00
*/
#include <stdio.h>
#include "array.h"

void bubbleSort(int* array, int count) 
{
	int temp;
	for (int i=0; i<count-1; i++)
	{
		for (int j=0; j<count-1-i; j++)
		{
			if (array[j] > array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}

void recursiveBubbleSort(int* array, int count)
{
	if (1 == count)
	{
		return;
	}

	int temp;
	for (int i = 0; i < count-1; ++i)
	{
		if (array[i] > array[i+1])
		{
			temp = array[i];
			array[i] = array[i+1];
			array[i+1] = temp;
		}
	}
	recursiveBubbleSort(array, --count);
}

int main (int argc, char** args)
{	
	printArray(array, length);
	//bubbleSort(array, length);
	recursiveBubbleSort(array, length);
	printArray(array, length);
	if (!checkArray(array, length))
	{
		printf("Error occured!\n");
	}

	return 0;
}