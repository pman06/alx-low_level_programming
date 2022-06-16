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
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			if (i == 0)
				c[i] = (char) (c[i] + ('A' - 'a'));
			else if (c[i - 1] == ',' || c[i - 1] == ';')
				c[i] = (char)(c[i] + ('A' - 'a'));
			else if (c[i - 1] == '.' || c[i - 1] == '!')
				c[i] = (char)(c[i] + ('A' - 'a'));
			else if (c[i - 1] == '?' || c[i - 1] == '\"')
				c[i] = (char)(c[i] + ('A' - 'a'));
			else if (c[i - 1] == '(' || c[i - 1] == ')')
				c[i] = (char)(c[i] + ('A' - 'a'));
			else if (c[i - 1] == '{' || c[i - 1] == '}')
				c[i] = (char)(c[i] + ('A' - 'a'));
			else if (c[i - 1] == ' ' || c[i - 1] == '\t')
				c[i] = (char)(c[i] + ('A' - 'a'));
			else if (c[i - 1] == '\n')
				c[i] = (char)(c[i] + ('A' - 'a'));
		}
	}
	return (c);
}
