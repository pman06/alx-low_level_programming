#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - Function to print a string in reverse
 * @s: variable to
 * Return:  of i
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion((s + 1));
		_putchar(*(s + 0));
	}

}
