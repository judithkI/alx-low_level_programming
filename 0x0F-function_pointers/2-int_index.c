#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
* int_index - function that returns array index.
* @array: the array we search through.
* @size: the array size
* @cmp: the test function.
* Return: returns an integer
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, s;

	if (cmp == NULL)
		return (-1);
	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		s = cmp(array[i]);
		if (s == 1)
			return (i);
	}
	return (-1);
}
