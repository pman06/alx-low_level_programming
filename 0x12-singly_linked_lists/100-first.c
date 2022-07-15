#include "lists.h"
void myStartUpFun(void) __attribute__ ((constructor));

/**
 * myStartUpFun- Function to execute before main.
 * Return:  of i
 */
void myStartUpFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
