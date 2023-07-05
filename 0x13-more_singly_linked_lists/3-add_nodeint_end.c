#include "lists.h"

#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: double pointer to the beginning of the list
 * @n: integer to add to the list
 * Return: pointer to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *newnode;

	listint_t *current;

	if (head == NULL)

		return (NULL);

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)

		return (NULL);

	newnode->n = n;

	newnode->next = NULL;

	if (*head == NULL)

	{
		*head = newnode;

		return (newnode);
	}

	current = *head;

	while (current->next != NULL)

	{
		current = current->next;
	}

	current->next = newnode;

	return (newnode);

}
