#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Function to return name of argument.
 * @argc: the number of arguments supplied
 * @argv: char [] of arguments
 * Return:  of i
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", argv[0]);
	return (0);
}
