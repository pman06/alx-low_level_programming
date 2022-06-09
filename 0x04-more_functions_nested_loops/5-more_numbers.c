#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * more_numbers - Function to return 0-14 written 10x.
 * Return:  void
 */
void more_numbers(void)
{
	int c, i;

	for (c = 0; c < 10; c++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
