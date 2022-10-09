#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
  * print_strings - function that prints strings
  * @separator: string separator
  * @n: number of strings
  * Return: returns nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *s;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(string, char *);

		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(string);
}
