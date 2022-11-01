#include "3-calc.h"
#include <string.h>

/**
*get_op_func - the function that compare a string and my structur
*@s: a character to compare
*Return: 0
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

	while (*s && ops[i].op)
	{
		if (!strcmp(s, ops[i].op))
		{
			return (ops[i].f);
		}
		i++;
	}
	printf("Error\n");
	exit(99);
}

