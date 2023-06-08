include "main.h"

/**
 * _sqrt_recursion-checks for numbers below 1
 * @n: number to find roots
 * @t: iterator
 * Return: -1
 */
int _squareroot(int n, int t);

int _sqrt_recursion(int n)

{
	if (n <= 1)
		return (-1);
	else
		return (_squareroot(n, 0));
}

/**
 * _squareroot-returns the square root of a number
 * @t:iterator
 * @n:test numbers
 * Return: perfect square
*/
int _squareroot(int n, int t)
{
	if (t * t == n)
	{
		return (t);
	}
	else if (t * t > n)
	{
		return (-1);
	}
	else
		return (_squareroot(n, t + 1));
}
