#include "3-calc.h"

/**
 * main - program that performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	int (*funcptr)(int, int);

	if (argc != 4)
	{
		printf(" Error \n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	funcptr = get_op_func(argv[2]);
	result = funcptr(num1, num2);
	printf(" %i \n", result);
	return (0);
}
