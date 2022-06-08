#include <stdio.h>
#include "main.h"
/**
 * print_to_98- start of execution
 * @n: value to work with
 * Return: integer value
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d", n);
	}	
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}

	if (n < 98)	
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
