#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list all);
void print_int(va_list all);
void print_float(va_list all);
void print_string(va_list all);
void print_all(const char * const format, ...);


/**
 * print_char - Prints a char.
 * @all: A list of arguments pointing to
 * the character to be printed.
 */
void print_char(va_list all)
{
	char letter;

	letter = va_arg(all, int);
	printf("%c", letter);
}

/**
 * print_int - Prints an int.
 * @all: A list of arguments pointing to
 * the integer to be printed.
 */
void print_int(va_list all)
{
	int num;

	num = va_arg(all, int);
	printf("%d", num);
}

/**
 * print_float - Prints a float.
 * @all: A list of arguments pointing to
 * the float to be printed.
 */
void print_float(va_list all)
{
	float num;

	num = va_arg(all, double);
	printf("%f", num);
}

/**
 * print_string - Prints a string.
 * @all: A list of arguments pointing to
 * the string to be printed.
 */
void print_string(va_list all)
{
	char *str;

	str = va_arg(all, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}
/**
 * print_all - Prints anything, followed by a new line.
 * @format: A string of characters representing the argument types.
 * @...: A variable number of arguments to be printed.
 *
 * Description: Any argument not of type char, int, float,
 * or char * is ignored.
 * If a string argument is NULL, (nil) is printed instead.
 */
void print_all(const char * const format, ...)
{
	int j;
	int i = 0;
	char *separator = "";
	va_list all;
	printer_t pall[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}

	};

	va_start(all, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4 && (format[i] != *(pall[j].symbol)))
		{
			j++;
		}

		if (j < 4)
		{
			printf("%s", separator);
			pall[j].print(all);
			separator = ", ";
		}

		i++;
	}
	printf("\n");
	va_end(all);
}
