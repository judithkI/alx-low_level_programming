#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * array_range - function that creates an array of integers.
 * @min: the lower range
 * @max: the higher range
 * Return: returns a pointer to the int array
 */

int *array_range(int min, int max)
{
	int j = 0;
	int i;
	int num = 0;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		num++;
	}
	ptr = (int *) malloc(sizeof(int) * num);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++, j++)
	{
		ptr[j] = i;
	}
	return (ptr);
}

