#include "lists.h"
#include <stdlib.h>

/**
* free_listint2 - free the memory
* @head: head pointer of linked list
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
		}
	}
}
