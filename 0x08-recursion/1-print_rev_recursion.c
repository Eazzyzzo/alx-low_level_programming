#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @p: string to be printed
 *
 * Return: void
 */
void _print_rev_recursion(char *p)
{
	if (*p != '\0')
	{
		_print_rev_recursion(p + 1);
		_putchar(*p);
	}
}

