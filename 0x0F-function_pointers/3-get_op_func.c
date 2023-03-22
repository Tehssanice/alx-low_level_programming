#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - selects the correct function
 * @s: operator
 *
 * Return: pointer
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{ "+", op_add },
		{ "-", op_sub },
		{ "*", op_mul },
		{ "/", op_div },
		{ "%", op_mod },
		{ NULL, NULL }
	};

	int i;

	for (i = 0; i < 5; i++)
	{

		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
	}

	return (0);
}
