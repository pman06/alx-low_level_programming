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
	int len = strlen(str);
	int i;
	j = malloc(strlen(str));
	for (i = 0; i < len; i++)
	{
		*(j + i) = str[i];
	}
	return (j);
}
