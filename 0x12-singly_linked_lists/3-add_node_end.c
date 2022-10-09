#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* add_node_end - function that adds a new node at the end of a list_t list
* @head: the first pointer
* @str: the string used
* Return: returns a pointer
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *move, *endnode;

	move = (*head);
	endnode = malloc(sizeof(list_t));

	if (endnode == NULL)
		return (NULL);
	endnode->str = strdup(str);
	endnode->len = strlen(str);
	endnode->next = NULL;
	if (move == NULL)
	{
		(*head) = endnode;
		return (endnode);
	}
	while (move->next)
	{
		move = move->next;
	}
	move->next = endnode;

	return (endnode);
}
