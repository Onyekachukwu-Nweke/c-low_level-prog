/*
 * This program inserts a value into the array
 * Written by: Onyekachukwu Ejiofor Nweke
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - contains mains block of code
 * Return: 0 or 1.
 */

int main(void)
{
	int LA[] = {1, 3, 5, 7, 9};

	int item = 10, k = 3, n = 5;

	int i = 0, j = n;

	printf("The original array elements are: \n");
	for (i = 0; i < n; i++)
	{
		printf("LA[%d] = %d \n", i, LA[i]);
	}

	n = n + 1;

while (j >= k)
	{
		LA[j + 1] = LA[j];
		j = j - 1;
	}

	LA[k] = item;

	putchar('\n');

	printf("The array elements after insertion: \n");
	for (i = 0; i < n; i++)
	{
		printf("LA[%d] = %d \n", i, LA[i]);
	}
	return (0);
}
