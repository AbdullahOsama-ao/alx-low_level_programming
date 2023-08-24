#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - a scentence before main will be printed.
 * execuded function.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
