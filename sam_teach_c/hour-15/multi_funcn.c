#include <stdlib.h>
#include <stdio.h>

/**
 *
 *
 */

int MultiTwo(int *x, int *y);

int main(void)
{
	int x = 56, y = 5;

	printf("The multi function is being called \n");
	printf("56 * 5: %d\n", MultiTwo(&x, &y));

	return (0);
}

int MultiTwo(int *x, int *y)
{
	return (*x * *y);
}
