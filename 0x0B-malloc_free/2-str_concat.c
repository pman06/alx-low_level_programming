#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * str_concat - Function to concatenate 2 strings
 * @s1: variable string
 * @s2: variable string
 * Return:  char pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i, k, len1, len2;
	char *j;
	int total;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	total = len1 + len2;
	j = malloc(total + 1);
	for (i = 0; i < len1; i++)
	{
		*(j + i) = s1[i];
	}
	k = 0;
	for (; i < total; i++)
	{
		*(j + i) = s2[k];
		k++;
	}
	return (j);
}
