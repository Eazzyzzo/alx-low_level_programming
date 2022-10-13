#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array to search in
 *
 * @size: size of array
 *
 * @cmp: pointer to comparing functions
 *
 * Return: index of first element, 0 1 or -1
 */

int int_index(int *array, int size, int (*cmp)(int))

{

	int i;



	if (array && cmp)

	{

		for (i = 0; i < size; i++)

		{

			if (cmp(array[i]) != 0)



				return (i);

		}

	}



	return (-1);

}
