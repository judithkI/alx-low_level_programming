#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - function that duplicates  a string.
 * @str: pointer to the string to be duplicated.
 * Return: a pointerto the duplicate memory location.
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	ptr = (char *) malloc(sizeof(char) * (strlen(str) + 1));


	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		*(ptr + i) = str[i];
	}
	ptr[strlen(str)] = '\0';
	return (ptr);
}

