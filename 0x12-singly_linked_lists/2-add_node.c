#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int i;
	/*we are returning a pointer to an address that is **head*/

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL || str == NULL)
		return (NULL);
	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		{

		}
	newnode->len = i;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
