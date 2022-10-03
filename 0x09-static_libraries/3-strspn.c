#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string containing the prefix string.
 * @accept: contains the string used to count.
 * Return: returns an unsigned integer.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, a;
	unsigned int b = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (a = 0; s[a] != ','; a++)
		{
			if (accept[i] == s[a])
			{
				b++;
			}
		}
	}

	return (b);
}

