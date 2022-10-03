#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * create_array - function that creates a string and initializes it.
 * @sizes: the number of elements
 * @c: the specific character
 * Return: a pointer to the memory location.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;
		ptr = (char *) malloc(size);

	if (size == 0)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size - 1; i++)
	{
		*(ptr + i) = c;
	}
	return (ptr);
}

