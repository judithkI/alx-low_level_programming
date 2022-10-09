#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
  * print_numbers - function that prints numbers
  * @separator: the string separator
  * @n: the number of integers
  * Return: returns nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list print;

	va_start(print, n);

	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(print, int));

		if (i != (n) && separator != NULL)

			printf("%s", separator);
	}
	va_end(print);

	printf("\n");
}
