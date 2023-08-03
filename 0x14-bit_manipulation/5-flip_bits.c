#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: number
 * @m: number
 * Return: number of bits you would need to flip to get from one number to
 * another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int val;
	unsigned int cnt = 0;

	val = n ^ m;

	while (val)
	{
		cnt++;
		val = val & (val - 1);
	}

	return (cnt);
}
