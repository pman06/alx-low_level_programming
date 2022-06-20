#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - Function to print chessboard
 * @a: variable holding cheeseboard
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	unsigned long int i, j;

	for (i = 0; i < sizeof(a); i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			if (j == 7)
			{
				_putchar('\n');
			}
		}
	}

}
