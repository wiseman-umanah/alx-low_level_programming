#include <stdio.h>
#include "lists.h"

/**
* list_len - prints the number of items in linked list
* @h: address of head node
* Return: returns the number of items
*/
size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t i = 0;

	temp = h;
	while (temp != 0)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
