#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
unsigned int b_len(const char *b);
unsigned int power(unsigned int num, unsigned int power);
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = b_len(b);
	unsigned int a, i, c = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0')
		{
			if (b[i] != '1')
			{
				return (0);
			}
		}

		a = b[i] - '0';
		c = c + power((a * 2), --len);

	}
	return (c);
}

unsigned int b_len(const char *b)
{
	unsigned int i, len = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		len++;
	}

	return (len);
}

unsigned int power(unsigned int num, unsigned int power)
{
	unsigned int sum = 1;
	unsigned int i;

	if (power == 0)
		return (1);
	for (i = 0; i < power; i++)
	{
		sum = sum * num;
	}
	return (sum);
}
