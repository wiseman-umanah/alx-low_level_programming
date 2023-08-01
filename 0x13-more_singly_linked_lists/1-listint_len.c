#include "lists.h"

/**
* print_listint - prints all the number of elements of a list_t.
* @h: pointer to list.
*
* Return: the number of nodes.
*/

size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
