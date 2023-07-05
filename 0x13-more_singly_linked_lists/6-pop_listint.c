#include "lists.h"

#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked lis
 *
 * @head: double pointer to the beginning of the list
 *
 * Return: the head node's data (n).
 */

int pop_listint(listint_t **head)

{

	listint_t *curr;

	int n;



	if (head == NULL || *head == NULL)

		return (0);

	curr = *head;

	*head = curr->next;

	n = curr->n;

	free(curr);

	return (n);

}
