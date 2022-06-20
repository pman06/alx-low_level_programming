#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _memcpy - Function to copy and paste from and to memory locations
 * @src: source memory location variable
 * @dest: destination memory location variable
 * @n: bytes value to copy
 * Return:  of i
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));

}
