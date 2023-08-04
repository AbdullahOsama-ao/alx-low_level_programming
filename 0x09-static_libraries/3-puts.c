#include "main.h"
#include<stdio.h>

/**
 * _puts - Program prints a string to stdout.
 * @str: The string to be printed.
 * _putchar prints a newline
 */
void _puts(char *s)
{
	while (*s)
		_putchar(*s++);

	-putchar('\n');
}
