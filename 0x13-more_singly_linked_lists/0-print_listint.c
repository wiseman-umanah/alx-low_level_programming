#include "lists.h"
/**
* print_listint - prints all the elements of a list_t.
* @h: pointer to list.
*
* Return: the number of nodes.
*/

size_t print_listint(const listint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
