#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Function to print numbers followed by new line
 * @separator: chracter to print between numbers
 * @n: number of variables
 * Return:  void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			str = va_arg(ap, char*);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			str = va_arg(ap, char*);
			if (i != n - 1)
			{
				if (str == NULL)
					printf("(nil)%s", separator);
				else
					printf("%s%s", str, separator);
			}
			else
			{
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
			}
		}
	}
	va_end(ap);
	printf("\n");
}
