#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 * Return: unsigned int with decimal value of binary number, or 0 if error
 */

unsigned int binary_to_uint(const char *b)

{

	int i;

	unsigned int number;



	number = 0;

	if (!b)

		return (0);

	for (i = 0; b[i] != '\0'; i++)

	{

		if (b[i] != '0' && b[i] != '1')

			return (0);

	}

	for (i = 0; b[i] != '\0'; i++)

	{

		number <<= 1;

		if (b[i] == '1')

			number = number + 1;

	}

	return (number);

}
