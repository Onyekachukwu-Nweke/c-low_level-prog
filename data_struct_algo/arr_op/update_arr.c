/*
 * This program updates an element in array
 * Written by: Onyekachukwu Ejiofor
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - contains the main block
 * Return: 0 or 1.
 */

int main(void)
{
	int LA[] = {1, 3, 5, 8, 24};

	int k = 3, n = 5;

	int i, item = 10;

	printf("The original elements are: \n");

	for (i = 0; i < n; i++)
	{
		printf("LA[%d] = %d \n", i, LA[i]);
	}

	putchar('\n');

	LA[k - 1] = item;

	printf("The array elements after update are: \n");

	for (i = 0; i < n; i++)
	{
		printf("LA[%d] = %d \n", i, LA[i]);
	}

	return (0);
}
