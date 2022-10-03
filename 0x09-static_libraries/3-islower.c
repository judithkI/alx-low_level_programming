#include "main.h"
/**
  * _islower - function to check for lower case letters
  * @c: is the that we will use for the argument of function
  * Return: o
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

