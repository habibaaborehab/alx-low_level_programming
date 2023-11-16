#include <stdio.h>


/**
 * f - prints something before main
 *
 * Return: void
 */

void f(void) __attribute__ ((constructor))
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
