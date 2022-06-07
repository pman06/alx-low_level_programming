#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - Function to return absolute values.
 * @i: the number to be checked
 * Return:  of i
 */
int print_last_digit(int i)
{
	int digit = i % 10;

	if (i < 0)
		digit = digit * -1;
	_putchar(digit + '0');
	return (digit);
}
