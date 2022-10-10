#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
  * add_nodeint_end - function that adds a new node at the end of a list.
  * @head: pointer to pointer to node one
  * @n: the int to be included
  * Return:: return a pointer.
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end, *move;

	move = (*head);
	end = malloc(sizeof(listint_t *));
	end->n = n;
	end->next = NULL;
	if (end == NULL)
		return (NULL);
	if ((*head) == NULL)
	{
		(*head) = end;
		return (end);
	}
	while (move->next)
	{
		move = move->next;
	}
	move->next = end;
	return (end);
}
