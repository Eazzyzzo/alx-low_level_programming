#include "main.h"

/**
 * _calloc - multiplies two digits
 * @nmemb: 1st digit in the multiplication
 * @size: 1st digit in the multiplication
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned long int ver, i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ver = nmemb * size;
	ptr = malloc(ver);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ver; i++)
		ptr[i] = '\0';
	return (ptr);
}
