#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * factorial - Function to return factorial of a number
 * @n: variable to factorise
 * Return:  of i
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
