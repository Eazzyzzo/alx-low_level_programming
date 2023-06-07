#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to be used
 *
 * Return: the factorial of the number
 */
int factorial(int n)
{
	int next;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	next = factorial(n - 1);
	return (n * next);
}

