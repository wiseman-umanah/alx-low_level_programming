#include "lists.h"
#include <stdlib.h>

/**
* delete_nodeint_at_index - deletes a node with the given index
* @head: pointer to linked list
* @index: the index
* Return: return 1 if successfully, -1 if not
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev, *new;
	unsigned int count;

	count = 0;
	temp = *head;
	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		prev = temp;
		temp = temp->next;
		free(prev);
		*head  = temp;
	}
	else
	{
		while (temp != NULL)
		{
			temp = temp->next;
			count++;
		}
		if (index > count)
			return (-1);
		count = 0;
		while (count != index)
		{
			prev = temp;
			temp = temp->next;
			new = temp;
			new = new->next;
			count++;
		}
		prev->next = new;
		free(temp);
	}
	return (1);
}
