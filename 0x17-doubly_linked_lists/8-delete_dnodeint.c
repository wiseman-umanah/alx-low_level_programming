#include "lists.h"

/**
 * delete_dnodeint_at_index - delete content at index
 * @head: the head pointer to list
 * @index: the index to delete
 * Return: returns 1 for success and 0 for failure
*/


int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *previous, *next;
	unsigned int i;

	i = 0;
	if (*head == NULL)
		return (-1);
	current = *head;
	while (current->prev != NULL)
		current = current->prev;
	while (current->next != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	if (current->prev == NULL && current->next == NULL)
		*head = NULL;
	else if (current->prev != NULL)
	{
		previous = current->prev;
		next = current->next;
		previous->next = next;
		next->prev = previous;
	}
	else
	{
		next = current->next;
		next->prev = NULL;
		*head = next;
	}
	free(current);
	return (1);
}
