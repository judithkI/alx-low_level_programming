#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
* add_nodeint - adds a new node at the start of a list
* @head: the pointer to the pointer to the head entered
* @n: the new integer
* Return: returns new mode address
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t *));
	if (new == NULL)
	{
		return (NULL);
	}
	new->next = (*head);
	new->n = n;
	(*head) = new;
	return (new);
}
