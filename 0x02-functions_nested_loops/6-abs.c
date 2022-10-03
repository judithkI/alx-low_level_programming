#include "main.h"
/**
  * _abs - function that computes the absolute value of an integer
  * @c: is the int that will be used as the argument of the function
  * Return: 0
  */

int _abs(intv c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}

