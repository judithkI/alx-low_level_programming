#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
* print_listint - function to prints all the elements of a list
* @h: the location of the first node
* Return: returns a size_t
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *move;
	size_t a = 0;

	move = h;

	while (move != NULL)
	{
		printf("%d\n", move->n);
		a = a + 1;
		move = move->next;
	}
	return (a);
}
