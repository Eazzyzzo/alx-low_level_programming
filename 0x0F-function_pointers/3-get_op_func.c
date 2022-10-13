#include "3-calc.h"

/**
 * get_op_func - function pointer that select the correct function to perform
 *
 * @s: operator given by user
 *
 * Return: pointer to function
 */

int (*get_op_func(char *s))(int, int)

{

	opt_t ops[] = {

		{"+", op_add},

		{"-", op_sub},

		{"*", op_mul},

		{"/", op_div},

		{"%", op_mod},

		{NULL, NULL}

	};

	int i;



	i = 0;



	while (ops[i].op)

	{

		if (strcmp(ops[i].op, s) == 0)

			return (ops[i].f);

		i++;

	}



	return (NULL);

}

