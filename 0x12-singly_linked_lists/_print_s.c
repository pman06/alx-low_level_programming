#include "lists.h"
/**
 * print_string - function to return char
 * @s: string pointer given
 * Return: number of char printed
 */
int print_string(char *s)
{
	int count;

	if (s == NULL)
		s = "(null)";
	count = 0;
	while (s[count] != '\0')
		count += _putchar(s[count]);
	return (count);
}
