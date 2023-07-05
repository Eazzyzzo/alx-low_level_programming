#include "lists.h"

#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 *
 * @head: double pointer to the beginning of a listint_t list
 *
 * @n: integer to add to the list
 *
 * Return: address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)

{

	listint_t *newnode;



	if (head == NULL)
	{
		return (NULL);
	}

	newnode = (listint_t) malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;

	newnode->next = *head;

	*head = newnode;

	return (newnode);

}
