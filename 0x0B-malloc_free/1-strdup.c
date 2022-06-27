#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _strdup - Function to copy supplied str to mem loc
 * @str: variable string
 * Return:  char pointer
 */
char *_strdup(char *str)
{
	char *j;
	int len;
	int i;

	if (str == NULL)
	{
		printf("failed to allocate memory\n");
		return ('\0');
	}
	len = strlen(str);
	j = malloc(strlen(str) * sizeof(char) + 1);
	if (j == NULL)
	{
		return ('\0');
	}
	for (i = 0; i < len; i++)
	{
		*(j + i) = str[i];
	}
	return (j);
}
