#include <stdlib.h>
#include <stdio.h>

/**
 *
 *
 */

int main(void)
{
	char c = 'A';
	char *ptr_char;

	ptr_char = &c;
	printf("Before update => %c\n", *ptr_char);

	*ptr_char = 'B';
	printf("After update => %c\n", *ptr_char);

	return (0);
}
