#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _atoi - Function to return absolute values.
 s of 'n': %p\n", &n); Return:  of i
 */
int _atoi(char *s)
{
	int i;

	int len = strlen(s);
	for (i = 0; i < len; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
				
			if( s[i - 1] == '-')
				putchar('-');

			putchar(s[i]);

		}	
		
	}
	putchar('\n');
	return (0);
}
