#include "lists.h"
#include <stdlib.h>

/**
* free_listint2 - free the memory
* @head: head pointer of linked list
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *new, *temp;

	new = *head;
	while (new != NULL)
	{
		temp = new;
		new = new->next;
		free(temp);
	}
	*head = NULL;
}
