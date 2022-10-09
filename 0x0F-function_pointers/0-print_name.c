#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
* print_name - function to print a name.
* @name: the name to be printed.
* @f: a function that accesses name
* Return: returns nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
