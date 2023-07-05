#include "lists.h"

#include <stdlib.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to the first node
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)

{
	size_t count = 0;

	listint_t *curr;

	if (h == NULL)
	{
		printf("list is empty \n");
	}

	curr = h;

	while (curr->next != NULL)
	{
		printf("%d", curr->n);

		curr = curr->next;
		count++;


	}

	return (count);
}


