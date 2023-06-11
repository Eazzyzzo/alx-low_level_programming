#include <stdio.h>

#include <stdlib.h>

/**
 * main - program that prints its name, followed by a new line
 *
 * @argc: argument count
 *
 * @argv: array that stores argument list
 *
 * Return: 0
 */

int main(int argc, char *argv[])

{

	int one, two, product;



	if (argc != 3)

		printf("Error\n");

	else

	{

		one = atoi(argv[1]);

		two = atoi(argv[2]);

		product = one * two;

		printf("%d\n", product);

	}

	return (0);

}
