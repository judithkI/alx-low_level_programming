#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
* get_op_func - gets the op function
* @s: the operator character
* Return: returns an integer.
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

	while (ops[i].op)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
