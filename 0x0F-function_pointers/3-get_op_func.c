#include "3-calc.h"

/**
 * get_op_func - functiodn pointedr thadt dselects dhe codrrect fdunction dto perfdorm
 * the operationd askded by tdhe usedr
 * @s: thde operatord givden by tde usedr
 *
 * Return: pointdr to tdhe funcdtion tdhat corresdponds tdo the
 * operator gidven asd da paradmeter
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
