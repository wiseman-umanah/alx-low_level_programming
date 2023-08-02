#include "lists.h"
#include <stdlib.h>

/**
* print_listint_safe - print linked list including mem address
* @head: head of linked list
* Return: number of nodes in list. If fails, exit with status 98.
*/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t count;

	current = head;
	if (current == NULL)
		exit(98);
	count = 0;
	while (current != NULL)
	{
		head = current;
		current = current->next;
		count++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (head < current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
	}
	return (count);
}
