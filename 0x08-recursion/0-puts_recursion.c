#include "main.h"
/**
 *_puts_recursion-prints a string, followed by a new line.
 *@l:string to be printed
 *Return: void
 */

void _puts_recursion(char *l)
{
	if (*l != '\0')
	{
		_putchar(*l);
		_puts_recursion(l + 1);
	}
	else if (*l == '\0')
	{
		_putchar('\n');
	}

}
