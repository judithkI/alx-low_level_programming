#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* add_node - a function that adds a new node at the beginning
* @head: the head of the node
* @str: the working string
* Return: returns a pointer
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->next = (*head);
	newnode->len = strlen(str);
	newnode->str = strdup(str);

	(*head) = newnode;

	return (*head);
}
