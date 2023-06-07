#include "main.h"

/**
 * _strlen_recursion - calculates the length of a string
 * @s: string to be calculated
 *
 * Return: total, which is the lenght of the string
 */
int _strlen_recursion(char *s)
{
	int total = 0;

	if (*s != '\0')
	{
		total++;
		total = total +  _strlen_recursion(s + 1);
	}
	return (total);
}

