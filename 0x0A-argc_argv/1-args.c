#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Function to print number of argument.
 * @argc: the number of arguments supplied
 * @argv: char [] of arguments
 * Return:  of i
 */
int main(int argc, char *argv[])
{
	if (argv)
		printf("%i\n", argc - 1);
	return (0);
}
