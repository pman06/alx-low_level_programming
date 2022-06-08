#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - funtion to generate a random number and check  if n>0
* @n: value to work with
* Return: zero
*/
int positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
