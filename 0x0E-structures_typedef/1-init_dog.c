#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
* init_dog - function that initializes the var of struct dog.
* @d: the pointer to the location of the initialization.
* @name: the name in struct dog
* @age: the age in struct dog
* @owner: the owner in struct dog
* Return: returns void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	}
}
