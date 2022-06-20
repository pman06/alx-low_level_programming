#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - Function to search a string for any of a set of bytes
 * @s: variable string to be checked
 * @accept: varriable substring to check in s
 * Return:  of i
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
