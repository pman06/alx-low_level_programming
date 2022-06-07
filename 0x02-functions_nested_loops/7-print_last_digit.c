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
	int digit;

	if (i < 0)
		i = i * -1;
	digit = i % 10;
	_putchar(digit % 10 + '0');
	return (digit);
}
