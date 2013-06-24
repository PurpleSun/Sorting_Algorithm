/*
	Filename: mergeSort.c
	Author: Tony Zeng
	Mail: laoweiyeah@gmail.com
	Function: implement merge sorting algorithm
	Time: 2013-6-24 13:56:25
*/
#include <stdio.h>
#include <stdlib.h>
#include "array.h"

void merge(int* array, int low, int half, int high)
{
	int leftLength  = half - low + 1;
	int rightLenght = high - half;
	int* leftArray  = malloc(sizeof(int) * leftLength);
	int* rightArray = malloc(sizeof(int) * rightLenght);
	int i, j, k;	// i point to leftArray, j point to rightArray, and k point to array
	
	// backup array with leftArray and rightArray
	for (i = 0, k = low; i < leftLength; ++i, ++k)
	{
		leftArray[i] = array[k];
	}
	for (i = 0; i < rightLenght; ++i, ++k)
	{
		rightArray[i] = array[k];
	}

	for (k = low, i = j = 0; i < leftLength && j < rightLenght; ++k)
	{
		array[k] = (leftArray[i] < rightArray[j]) ? (leftArray[i++]) : (rightArray[j++]);
	}
	while (i < leftLength)
	{
		array[k++] = leftArray[i++];
	}
	while (j < rightLenght)
	{
		array[k++] = rightArray[j++];
	}
}

void mergeSort(int* array, int low, int high)
{
	if (low >= high)
	{
		return;
	}
	// int half = (low + high) / 2;		// may overflow
	int half = (low & high) + ((low ^ high) >> 1);
	mergeSort(array, low, half);
	mergeSort(array, half + 1, high);
	merge(array, low, half, high);
}

int main(int argc, char** args)
{
	printArray(array, length);
	mergeSort(array, 0, length - 1);
	printArray(array, length);
	if (!checkArray(array, length))
	{
		printf("Error occured!\n");
	}

	return 0;
}