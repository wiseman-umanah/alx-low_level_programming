#include "lists.h"

/**
 * print_dlistint - prints the contents in linked list
 * @h: the head pointer to list
 * Return: returns the number of characters printed
*/


size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	n = 0;
	if (h == NULL)
		return (n);
	while (h->prev != NULL)
		h = h->prev;
	for (; h != NULL; n++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}
