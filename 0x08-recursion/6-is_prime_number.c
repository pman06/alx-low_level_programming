#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * is_prime - Function to check prime number
 * @n: prime variable
 * @i: start integer
 * Return:  of i
 */
int is_prime(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	if (i <= n / 2)
		is_prime(n, i + 1);
	return (1);
}

/**
 * is_prime_number - Function to check prime number
 * @n: prime variable
 * Return:  of i
 */
int is_prime_number(int n)
{
	int start;

	start = 4;
	if (n <= 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	else
		return (is_prime(n, start));
}
