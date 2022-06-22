#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - Function to check prime number
 * @n: prime variable
 * Return:  of i
 */
int is_prime_number(int n)
{
	int start;

	start = 2;
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		for (; start < n / 2; start++)
		{
			if (n % start == 0)
			{
				return (0);
			}
		}
	}
	return (1);
}
