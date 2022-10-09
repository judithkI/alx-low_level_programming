#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
* array_iterator - function to execute a function on an array
* @array: the array we are using
* @size: the size of the array
* @action: the function to be executed
* Return: returns nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL)
		return;
	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
