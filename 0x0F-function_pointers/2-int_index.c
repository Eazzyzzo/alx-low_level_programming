#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array to search in
 *
 * @size: size of array
 *
 * @cmp: pointer to functions
 *
 * Return: index of first element, 0 1 or -1
 */

int int_index(int *array, int size, int (*cmp)(int))

{

	int x;



	if (array && cmp)

	{

		for (x = 0; x < size; x++)

		{

			if (cmp(array[x]) != 0)



				return (x);

		}

	}



	return (-1);

}
