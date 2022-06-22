#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - Function to recursively return power of a number
 * @x: variable to calculate
 * @y: power to be raised
 * Return:  of i
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
