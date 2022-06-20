#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _strchr - Function to locate  char c in s string
 * @s: variable pointer of string
 * @c: char c to find
 * Return: pointer to c in s
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));

}
