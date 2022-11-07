#include "main.h"


/**
 * get_op_func - Get operator function
 *
 * @s: operator
 *
 * Return: Pointer to the function that corresponds to the operator s
 */

int (*get_op_func(char s))(va_list)
{
	op_t ops[] = {
	{'c', printChar},
	{'s', printString},
	{'%', printSign},
	{'d', printNum},
	{'i', printNum},
	{'b', printBinary},
	};

	int i = 0;

	while (i < 6)
	{
		if (ops[i].op == s)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
