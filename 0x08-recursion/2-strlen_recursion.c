#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - Function to return the length of a string
 * @s: variable to
 * Return:  of i
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (_strlen_recursion((s + 1)));

}
