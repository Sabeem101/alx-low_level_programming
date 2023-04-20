#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - select correct operation function chosen by user
 * @s: operator argument
 *
 * Return: function pointer corresponding to operator given
 */

int (*get_op_fun(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int x = 0;

	while (ops[x].op != NULL)
	{
		if (*(ops[x].op) == *s)
			return (ops[x].f);
		x++;
	}
	return (NULL);
}
