#include <ctype.h>
#include "main.h"
#include <stdio.h>
/**
 * _isupper - Function to return absolute values.
 * @i: the number to be checked
 * Return:  1 or 0
 */
int _isupper(char i)
{
	if (i >= 'A' && i <= 'Z')
		return (1);
	return (0);
}
