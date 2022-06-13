#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * print_rev - Function to return absolute values.
 * @str: the number to be checked
 * Return:  of i
 */
void print_rev(char *str)
{
	int len = strlen(str);
	int i;

	for (i = len; i > 0; i--)
		_putchar(str[i - 1]);
	_putchar('\n');
}
