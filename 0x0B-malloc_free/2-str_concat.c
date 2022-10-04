#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
  * str_concat - function to concatenate two strings.
  * @s1: the first string.
  * @s2: the second string.
  * Return: returns pointer to the concat
  */

char *str_concat(char *s1, char *s2)
{
	int i;
	int a;
	int b;
	char *ptr;

	a = (s1 == NULL) ? 0 : strlen(s1);
	b = (s2 == NULL) ? 0 : strlen(s2);

	ptr = (char *)malloc(sizeof(char) * (a + b + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < a; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i < a + b; i++)
	{
		ptr[a + i] = s2[i];
	}
	ptr[a + b] = '\0';
	return (ptr);
}

