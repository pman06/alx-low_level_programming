#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Function to return absolute values
 * @count: the number to be checked
 * Return:  int
 */
int sum_them_all(const unsigned int count, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start(ap, count);
	sum = 0;
	for (i = 0; i < count; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);

}
