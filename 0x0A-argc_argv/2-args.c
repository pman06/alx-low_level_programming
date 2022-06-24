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
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
