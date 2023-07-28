#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
* print_list - prints the items in the linked list
* @h: address of head node
* Return: returns the number of items in list
*/

size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t i = 0;

	temp = h;
	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			temp = temp->next;
			i++;
		}
		printf("[%d] %s\n", temp->len, temp->str);
		i++;
		temp = temp->next;
	}
	return (i);
}
