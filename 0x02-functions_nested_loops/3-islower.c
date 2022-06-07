#include <stdio.h>
#include "main.h"
/**
 * _islower - start of execution
 * @c: the char to be checked
 * Return: 1 or zero
 */
int _islower(int c)
{
	int f;
	char ch;

	f = 0;
	for (ch = 'a'; ch < 'z'; ch++)
	{
		if (c == ch)
		{
			f = 1;
			break;
		}
	}
	return (f);
}
