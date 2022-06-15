#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * *_strncpy - Function to return absolute values.
 * @dest: thedestination string
 * @src: the source string
 * @i the number of bytes of source to copy
 * Return:  pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
