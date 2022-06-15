#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * *string_toupper - Function to return absolute values.
 * @i: the number to be checked
 * Return:  of i
 */
char *string_toupper(char *i)
{
	int j;

	for (j = 0; i[j] != '\0'; j++)
	{
		if (i[j] >= 'a' && i[j] <= 'z')
		{
			i[j] = i[j] - 32;
		}
	}
	return (i);
}
