#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int integer_multiply(int x, int y)
{
	int result;
	result = x * y;
	return result;
}

int main()
{
	int multiply;
	multiply = integer_multiply(3,5);

	printf("The multiplication of 3 and 5 is %d \n", multiply);

	return 0;
}
