#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * *cap_string - Function to convert toUppercase.
 * @c: The string to change toUppercase
 * Return:  string
 */
char *cap_string(char *c)
{
	int len = strlen(c);
	int i;

	for (i = 0; i < len; i++)
	{
		if ((i == 0 && isalpha(c[i]) > 0) || (c[i] != ' ' && isalnum(c[i - 1]) == 0))
		{
			if (c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] = (char)(c[i] + ('A' - 'a'));
			}
		}
		else if (c[i] >= 'A' && c[i] <= 'Z')
		{
			c[i] = (char)(c[i] + ('a' - 'A'));
		}
	}
	return (c);
}
