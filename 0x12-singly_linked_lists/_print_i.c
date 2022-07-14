#include "lists.h"
/**
 * print_int - function to print out int
 * @integer: integer suupplied
 * Return: number of int printed
 */
int print_int(int integer)
{
	int c, div = 1;
	unsigned int n;

	if (integer < 0)
	{
		c = _putchar('-');
		n = integer * -1;
	}
	else
		n = integer;

	while (n / div > 9)
		div *= 10;

	while (div != 0)
	{
		c = c + _putchar(n / div + '0');
		n = n % div;
		div = div / 10;

	}
	return (c);
}
