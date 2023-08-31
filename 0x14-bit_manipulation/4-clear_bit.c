#include "main.h"

/**
 * clear_bit - to set value to 0 ...
 * @n: the pointer to num ...
 * @index: bit index....
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
