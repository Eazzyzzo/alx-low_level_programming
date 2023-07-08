#include "main.h"

/**
 * _power - calculates (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 * Return: value of (base ^ power)
 */

unsigned long int _power(unsigned int base, unsigned int power)

{

	unsigned long int number;

	unsigned int i;



	number = 1;

	for (i = 1; i <= power; i++)

		number = number * base;

	return (number);

}



/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 * Return: void
 */

void print_binary(unsigned long int n)

{

	unsigned long int divider, search;

	char flag;



	flag = 0;

	divider = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (divider != 0)

	{

		search = n & divider;

		if (search == divider)

		{

			flag = 1;

			_putchar('1');

		}

		else if (flag == 1 || divider == 1)

		{

			_putchar('0');

		}

		divider >>= 1;

	}

}
