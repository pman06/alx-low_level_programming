#include <stdio.h>
#include "main.h"
/**
 * _isalpha - start of execution
 * @c: the char to be checked
 * Return: 1 or zero
 */
int _isalpha(int c)
{
	int f;
	char ch;

	f = 0;
	for (ch = 'A'; ch < 'z'; ch++)
	{
		if (c == ch)
		{
			f = 1;
			break;
		}
	}
	return (f);
}
