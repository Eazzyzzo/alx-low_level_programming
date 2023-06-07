#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: number to be used
 * @y: exponent to be used
 *
 * Return: x raised to power y
 */

int _pow_recursion(int x, int y)

{
	int power = 0;

	if (y > 0)

	{
		power = x * _pow_recursion(x, (y - 1));
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}

	return (power);

}

