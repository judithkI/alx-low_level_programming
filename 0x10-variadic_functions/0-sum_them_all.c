#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all - adds integers parsed into the function
  * @n: number of integers to be added
  * Return: returns an integer sum.
  */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list add;

	va_start(add, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(add, int);
	}
	va_end(add);

	return (sum);
}
