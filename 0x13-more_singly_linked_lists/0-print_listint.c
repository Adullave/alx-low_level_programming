#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print elements of linkedlist
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
<<<<<<< HEAD
	size_t nodes = 0;
=======
	size_t node = 0;
>>>>>>> f27d978e2feda621d520daafda3749e3dc186e1a
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
<<<<<<< HEAD
		nodes++;
	}
	return (nodes);
=======
		node++;
	}
	return (node);
>>>>>>> f27d978e2feda621d520daafda3749e3dc186e1a
}
