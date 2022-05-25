#include <stdlib.h>
#include <stdio.h>

/**
 *
 *
 */

int main(void)
{
	int x = 512;
	int y = 1024;
	int z = 2048;

	printf("Address => %p and Content => %d\n", &x, x);
	printf("Address => %p and Content => %d\n", &y, y);
	printf("Address => %p and Content => %d\n", &z, z);
}
