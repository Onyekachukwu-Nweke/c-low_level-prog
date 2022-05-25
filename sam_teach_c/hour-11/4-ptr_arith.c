#include <stdlib.h>
#include <stdio.h>

/**
 *
 *
 *
 */

int main(void)
{
	int x = 5, y = 6;
	int *ptr_x = &x;
	int *ptr_y = &y;

	*ptr_x *= *ptr_y;
	printf("Multiplication => %d\n", *ptr_x);

	return (0);
}
