/*
 * This program prints all the elements in the array
 * Written by : Onyekachukwu Ejiofor Nweke
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - contains the main block
 * Return: 0 or 1
 */

int main(void)
{
	int LA[] = {1, 3, 5, 7, 9};

	int i, n = 5;

	printf("The original array elements are:\n");
	for (i = 0; i < n; i++)
	{
		printf("LA[%d] = %d \n", i, LA[i]);
	}
	return (0);
}
