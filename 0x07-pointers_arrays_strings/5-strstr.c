#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * *_strstr - Function that locates a substring
 * @haystack: variable string to be check
 * @needle: variable substring to be checked
 * Return:  pointer location
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));

}
