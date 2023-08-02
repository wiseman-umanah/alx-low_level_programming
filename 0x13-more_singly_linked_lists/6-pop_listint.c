#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - deletes the head node of a list
* @head: pointer to linked list
* Return: returns the head data (n)
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i = 0;

	temp = *head;
	if (*head == NULL)
		return (0);
	i = temp->n;
	*head = temp->next;
	free(temp);
	return (i);
}
