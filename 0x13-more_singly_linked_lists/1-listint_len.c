#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
* listint_len - function to return num of nodes of a list
* @h: the location of the first node
* Return: returns a size_t
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *move;
	int a = 0;

	move = h;
	while (move != NULL)
	{
		/printf("%d", move->n);/
		move = move->next;
		a++;
	}
	return (a);
}
