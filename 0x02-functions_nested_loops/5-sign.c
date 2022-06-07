#include <stdio.h>
#include "main.h"
/**
 * print_sign - start of execution
 * @n: the number to be checked
 * Return: 1 or zero
 */
int print_sign(int n)
{
	int val;

	if (n > 0)
	{
		_putchar('+');
		val = 1;
	}
	if (n == 0)
	{
		_putchar('0');
		val = 0;
	}
	if (n < 0)
	{
		_putchar('-');
		val = -1;
	}
	return (val);
}
