#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* list_len - Write a function that returns the number of elements in a list
* @h: the head link
* Return: returns the number of nodes
*/
size_t list_len(const list_t *h)
{
	size_t nodenum = 0;

	while (h != NULL)
	{
		h = h->next;
		nodenum++;
	}
	return (nodenum);
}
