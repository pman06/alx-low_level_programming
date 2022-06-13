#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _puts - Function to print a string.
 * @str: the number to be checked
 * Return:  void
 */
void _puts(char *str)
{
	int i;
	int length = strlen(str);

	for (i = 0; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
