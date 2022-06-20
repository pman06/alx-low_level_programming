#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: variable string to be  checked for accept substring
 * @accept: variable substring to check in s
 * Return:  int
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));

}
