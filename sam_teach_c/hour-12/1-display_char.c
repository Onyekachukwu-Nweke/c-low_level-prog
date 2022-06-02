#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *
 *
 */

int main(void)
{
	char array_ch[5] = {'A', 'B', 'C', 'D', 'E'};

	for (int i = 0; i < 5; i++)
	{
		printf("Array element[%d] => %c\n", i, array_ch[i]);
	}

	return (0);
}
