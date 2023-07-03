#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of members in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	for (i = 0; i; i++)
	{
		i = i + 0;
		h = h->next;
	}
	return (i);
}
