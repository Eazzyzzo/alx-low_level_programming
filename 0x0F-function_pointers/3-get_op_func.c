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
		op_t ops[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s && s[1] == '\0')
		{
			/*s[1]=='\0 ensure that operator is a single character*/
			return (ops[i].f);
		}
	i++;
	}
	printf(" Error \n");
	exit(99);
}
