#include<stdio.h>
/**
 * main - Function to print text using putchar
 * Return: 1
 */
int main(void)
{
	char *mychars = "and that piece of art is useful\" - "
		"Dora Korpar, 2015-10-19\n";
	while (*mychars)
		putchar(*mychars++);
	return (1);
}
