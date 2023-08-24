#include <stdlib.h>
#include "lists.h"

/**
 * list_len - num of ele. in the linked lists...
 * @h: pointer to the list_t...
 *
 * Return: elements of h.
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
