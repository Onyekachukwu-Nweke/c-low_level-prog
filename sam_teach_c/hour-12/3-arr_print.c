#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *
 *
 */

int main(void)
{
	char list_ch[][2] = {
		'1', 'a',
		'2', 'b',
		'3', 'c',
		'4', 'd',
		'5', 'e',
		'6', 'f'
	};

	printf("Size of list_ch[][2] => %ld\n", sizeof(list_ch));
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			printf("%c %c\n", list_ch[i][j], list_ch[i][j]);
		}
	}

	return (0);
}
