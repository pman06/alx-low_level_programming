#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers- Function to print numbers followed by new line
 * @separator: chracter to print between numbers
 * @n: number of variables
 * Return:  void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
			printf("%i", va_arg(ap, int));
	}
	else
	{
		for (i = 0; i < n; i++)
			if (i != n - 1)
				printf("%i%s", va_arg(ap, int), separator);
			else
				printf("%i", va_arg(ap, int));
	}
	va_end(ap);
	printf("\n");
}
