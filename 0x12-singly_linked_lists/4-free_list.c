#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: `list_t` list to be freed
 */
void free_list(list_t *head)
{
	list_t *move;
	
	move = head;
	
	while (move)
	{
		move = move->next;
		free(head);
		head = move;
	}
}
