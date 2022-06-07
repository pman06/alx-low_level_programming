#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - Function to return absolute values.
 * Return:  zero
 */
void jack_bauer(void)
{
	int i, j, k, l;
	char b;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l < 10; l++)
				{
					_putchar(i % 10 + '0');
					_putchar(j % 10 + '0');
					_putchar(':');
					_putchar(k % 10 + '0');
					_putchar(l % 10 + '0');
					_putchar('\n');
					if (i == 2 && j == 3 && k ==5 && l ==9)
					{
						b = 'b';
						break;
					}
				}
				if (b == 'b')
				{
					break;
				}
			}

			if (b == 'b')
			{
				break;
			}
		}
		
		if (b == 'b')
		{
			break;
		}
	}
}
