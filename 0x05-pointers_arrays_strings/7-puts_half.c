#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * puts_half - Function to return absolute values.
 * @j: the number to be checked
 * Return:  void
 */
void puts_half(char *j)
{
	int len = strlen(j);
	int i;

	for (i = (len / 2) ; i < len; i++)
	{
		printf("%c", j[i]);
	}
	printf("\n");

}
