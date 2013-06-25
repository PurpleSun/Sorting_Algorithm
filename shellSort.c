/*
	Filename: shellSort.c
	Author: Tony Zeng
	Mail: laoweiyeah@gmail.com
	Function: implement of shell sorting algorithm
	Time: 2013-6-23 22:07:21
*/
#include <stdio.h>
#include "array.h"

void shellSort(int* array, int count, int step)
{
	int temp;
	for (int s = 0; s < step; ++s)
	{
		for (int i = s + step; i < count; i += step)
		{
			for (int j = i - step; j >= 0; j -= step)
			{
				if (array[i] < array[j])
				{
					temp = array[j];
					array[j] = array[i];
					array[i] = temp;
					i -= step;
				}
			}
		}
	}
}

int main(int argc, char** args)
{
	int step[] = {5, 3, 1};
	int stepLength = sizeof(step) / sizeof(step[0]);

	printArray(array, length);
	for (int i = 0; i < stepLength; ++i)
	{
		shellSort(array, length, step[i]);
	}
	printArray(array, length);
	if (!checkArray(array, length))
	{
		printf("Error occured!\n");
	}

	return 0;
}