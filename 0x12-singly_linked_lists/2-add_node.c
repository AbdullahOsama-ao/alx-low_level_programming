#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - new node at the begging of the linked list..
 * @head: double pointer to the list_t....
 * @str: a stirng that will be added to linked list.
 *
 * Return: add. of the new ele., NUll if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
