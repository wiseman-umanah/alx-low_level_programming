#include "lists.h"

/**
 * dlistint_len - counts the items in linked list
 * @h: the head pointer to list
 * Return: returns the length of node
*/


size_t dlistint_len(const dlistint_t *h)
{
	size_t n;

	n = 0;
	for (; h != NULL; n++)
		h = h->next;
	return (n);
}
