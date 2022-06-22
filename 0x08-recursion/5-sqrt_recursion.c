#include "main.h"
#include <math.h>
#include <stdio.h>


/**
 * check- Function to return natural sqroot
 * @n: variable to return its squaroot
 * @i: start check value for possible square roots
 * Return:  int
 */
int check(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i < n / i)
		return (check(n, i + 1));
	else if (i > n /  i)
		return (check(n, i - 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - Function to return natural sqroot
 * @n: variable to return its squaroot
 * Return:  of i
 */
int _sqrt_recursion(int n)
{
	int i = 1 ;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (check(n, i));
}
