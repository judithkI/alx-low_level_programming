#include "main.h"
int increse_divide(int n, int i);

/**
 * is_prime_number - func to return 1 if n is a prime num, otherwise return 0.
 * @n: the number we are checking.
 * Return: returns an integer.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (increse_divide(n, 2));
}
/**
 * increse_divide - function to increment dividend
 * @n: given number.
 * @i: dividend.
 * Return: return int.
 */
int increse_divide(int n, int i)
{
	if (n > i)
	{
		if (n % i == 0)
		{
			return (0);
		}
		return (increse_divide(n, i + 1));
	}

	return (1);
}

