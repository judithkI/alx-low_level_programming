#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: memory to be filled.
 * @b: the constant byte.
 * @n: the amount of money to be filled.
 * Return: returns a pointer to the memory location
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n - 1; i++)
	{
		*(s + i) = b;
	}

	return (s);
}

