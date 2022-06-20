#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _memset - Function to set memory locations with byte size
 * @s: pointer variable
 * @b: number oc b to store in s location
 * @n: byte size tto fill in *s
 * Return:  of pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
