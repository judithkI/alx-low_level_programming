#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: the pointer to the old location.
 * @old_size: the old size
 * @new_size: the new size
 * Return: returns a pointer to the location
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *ptrcopy;
	unsigned int index;

	if (old_size == new_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);

		if (ptr == NULL)
		{
			return (NULL);
		}
		return (ptr);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	ptrcopy = ptr;
	p = malloc(new_size);
	for (index = 0; index < old_size && index < new_size; index++)
	{
		p[index] = ptrcopy[index];
	}
	free(ptr);
	return (p);
}

