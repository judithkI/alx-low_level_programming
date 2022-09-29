#include "main.h"
/**
 * factorial - function that returns the factorial of a number.
 * @n: the given number
 * Return: returns an integer, -1 if n<0.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}

