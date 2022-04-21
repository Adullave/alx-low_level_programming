#include "lists.h"
#include <stdio.h>

/**
 * printlist - Prints all the elements of a list_t list
 * @h: The list_t list
 *
 * Return: The number of nodes in h
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		printf("[%d] %s\n", current->len,
		current->str != NULL ? current->str : "(nil)");
		current = current->next;
		nodes++;
	}
	return (nodes);
}
