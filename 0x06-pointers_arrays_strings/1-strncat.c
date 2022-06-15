#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * *_strncat - Function to return concat of dest and n byte of src
 * @dest: destination string
 * @src: source string
 * @i: amount of bytes from source string
 * Return:  char pointer
 */
char *_strncat(char *dest, char *src, int i)
{
	return (strncat(dest, src, i));
}
