#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Function to print all its arguments.
 * @argc: the number of arguments supplied
 * @argv: char [] of arguments
 * Return:  of i
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argc > 1)
	{
		int i = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", i);
	}
	return (0);
}
