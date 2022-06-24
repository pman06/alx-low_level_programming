#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main- Function to  prints the minimum number of coins
 * @argc: count of arguments
 * @argv: array of argument
 * Return: int
 */

int main(int argc, char *argv[])
{
	int val, count;

	count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	val = atoi(argv[1]);
	while (val)
	{
		if (val / 25 >= 1)
		{
			count++;
			val -= 25;
		}
		else if (val / 10 >= 1)
		{
			count++;
			val -= 10;
		}
		else if (val / 5 >= 1)
		{
			count++;
			val -= 5;
		}
		else if (val / 2 >= 1)
		{
			count++;
			val -= 2;
		}
		else
		{
			count++;
			val -= 1;
		}
	}
	printf("%i\n", count);
	return (0);
}
