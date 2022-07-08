#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Function to return absolute values
 * @separator: chracter to print between numbers
 * @n: number of variables
 * Return:  void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	if (separator != NULL)
		for (i = 0; i < n; i++)
			printf("%i%s ", va_arg(ap, int), separator);
	else
		for (i = 0; i < n; i++)
			printf("%i ", va_arg(ap, int));
	printf("\n");
	va_end(ap);

}
