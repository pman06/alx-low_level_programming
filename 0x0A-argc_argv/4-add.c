#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * check - Function to its a digit.
 * @str: char pointer of arguments
 * Return:  bool
 */
bool check(char *str)
{
	int i = 0;

	if (str[i] == '-')
		i = 1;
	for (; str[i] != '\0'; i++)
	{
		if (isdigit(str[i]) == 0)
			return (false);
	}
	return (true);
}

/**
 * main - Function to add all its arguments.
 * @argc: the number of arguments supplied
 * @argv: char [] of arguments
 * Return:  of i
 */
int main(int argc, char *argv[])
{
	int a = 1;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	while (a < argc)
	{
		if (check(argv[a]) == 1)
		{
			sum += atoi(argv[a]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		a++;
	}
	printf("%i\n", sum);
	return (0);
}
