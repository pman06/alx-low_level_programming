#include <stdio.h>
/**
 * main- main program to print the name of the file it was compiled from
 * @argc: argument counter
 * @argv: argument variables
 * Return: int
 */

int main(int argc, char **argv)
{
	if (argc && argv[0])
		printf("%s\n", __FILE__);
	return (0);
}
