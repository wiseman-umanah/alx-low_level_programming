#include "lists.h"

/**
 * free_dlistint - this frees a linked list
 * @head: the head pointer to list
*/


void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while (head != NULL)
	{
		temp = head;
		free(temp);
		head = head->next;
	}
}
