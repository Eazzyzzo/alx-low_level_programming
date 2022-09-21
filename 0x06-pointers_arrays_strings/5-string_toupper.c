#include "main.h"

/**
 * string_toupper - capitalizes all words of a string
 * @x: string parameter
 * Return: string
 */

char *string_toupper(char *x)

{
	int i = 0;

	while (x[i])

	{

		if (x[i] >= 97 && x[i] <= 122)

		x[i] = x[i] - 32;

		i++;

	}

	return (x);

}



