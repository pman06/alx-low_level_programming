#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - Function to print a string then a new line
 * @s: variable to
 * Return:  of i
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*(s + 0));
		_puts_recursion((s + 1));
	}
	else
		_putchar('\n');
}
