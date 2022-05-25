#include <stdlib.h>
#include <stdio.h>

/**
 *
 *
 */

int main(void)
{
	double flt_num = 123.45;
	double *flt_ptr;

	flt_ptr = &flt_num;
	printf("Value before => %.2f\n", *flt_ptr);

	*flt_ptr = 543.21;
	printf("Value after => %.2f\n", *flt_ptr);

	return (0);
}
