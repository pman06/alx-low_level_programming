#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - Function to return s.
 * @dest: destination to copy to
 * @src: source to copy from
 * Return:  of i
 */
char *_strcpy(char *dest, char *src)
{
	unsigned long int i;

	for (i = 0; i < strlen(src); i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
