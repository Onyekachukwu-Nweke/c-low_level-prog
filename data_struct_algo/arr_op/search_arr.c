/*
 * This program searches for an element in an array
 * Written by: Onyekachukwu Ejiofor Nweke
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - contains main block in the code
 * Return: 0 or 1.
 */

int main(void)
{
	int LA[] = {1, 3, 5, 7, 9};

	int item = 5, n = 5;

	int i = 0, j = 0;

	printf("The original array elements are: \n");

	for (i = 0; i < n; i++)
	{
		printf("LA[%d] = %d \n", i, LA[i]);
	}

	while (j < n)
	{
		if (LA[j] == item)
			break;
		j++;
	}

	printf("Found element %d at position %d \n", item, j+1);

	return (0);
}
