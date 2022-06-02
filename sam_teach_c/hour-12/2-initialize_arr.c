#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *
 *
 *
 */

int main(void)
{
	char array_ch[5];

	for (int i = 0; i < 5; i++)
		array_ch[i] = 'a' + i;
	for (int i = 0; i < 5; i++)
		printf("Element[%d] => %c\n", i, array_ch[i]);

	return (0);
}
