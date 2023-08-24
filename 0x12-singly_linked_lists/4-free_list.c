#include <stdlib.h>
#include "lists.h"

/**
 * free_list - deallocate memory of linked lists .
 * @head: the list_t will be freed ..
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
