#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * true_palindrome - Function to check string is palindrome
 * @s: variable string
 * @first: variable position first in string
 * @last: variable position last in string
 * Return:  of i
 */
int true_palindrome(char *s, int first, int last)
{
	if (*(s + first) != *(s + last))
		return (0);
	if (first < last - 1)
		return (true_palindrome(s, (first + 1), (last - 1)));

	return (1);
}

/**
 * is_palindrome - Function to check string is palindrome
 * @s: variable string
 * Return:  of i
 */
int is_palindrome(char *s)
{
	int lenght = strlen(s) - 1;

	if (lenght == 0 || lenght == 1)
		return (1);
	return (true_palindrome(s, 0, lenght));
}
