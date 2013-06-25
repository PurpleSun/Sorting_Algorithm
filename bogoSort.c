/*
	Filename: bogoSort.c
	Author: Tony Zeng
	Mail: laoweiyeah@gmail.com
	Function: implement of bogo sorting algorithm
	Time: 2013-6-23 23:43:59
*/
#include <stdio.h>
#include <stdlib.h>
#include "array.h"

void bogoSort(int* array, int count)
{
	int temp, random;
	while ( checkArray(array, count) != 1)
	{
		for (int i = 0; i < count - 1; ++i)
		{
			random = rand() % (count - 1);
			temp = array[i];
			array[i] = array[random];
			array[random] = temp;
		}
	}
}

int main(int argc, char** args)
{
	printArray(array, length);
	bogoSort(array, length);
	printArray(array, length);
	if (!checkArray(array, length))
	{
		printf("Error occured!\n");
	}

	return 0;
}