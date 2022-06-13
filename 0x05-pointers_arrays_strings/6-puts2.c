#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * puts2 - Function to print every character of str followed by NL
 * @i: the string passed
 * Return:  void
*/
void puts2(char *i)
{
	int len = strlen(i);
	int j;

	for (j = 0; j < len; j++)
	{
		if (j % 2 == 0)
		{
			printf("%c", i[j]);
		}
	}
	printf("\n");

}
