#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
void free_listint2(listint_t **head)
{
	listint_t *move;

	move = (*head);
	while (move)
	{
		move = move->next;
		free(*head);
		(*head) = move;
	}
}
