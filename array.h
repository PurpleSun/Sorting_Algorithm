typedef enum {
	false = 0,
	true = 1
} bool;

//int array[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
int array[10] = {72, 6, 57, 88, 60, 42, 85, 73, 6, 85};
int length = sizeof(array) / sizeof(array[0]);


void printArray(int* array, int length)
{
	for (int i = 0; i < length; ++i)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}

bool checkArray(int* array, int length)
{
	for (int i = 0; i < length-1; ++i)
	{
		if (array[i] > array[i+1])
		{
			return false;
		}	
	}

	return true;
}