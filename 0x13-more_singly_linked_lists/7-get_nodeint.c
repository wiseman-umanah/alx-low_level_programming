#include "lists.h"

/**
* get_nodeint_at_index - prints the value at index given
* @head: pointer to linked list
* @index: the index to print
* Return: returns pointer to linked list
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;
	while (head != NULL)
	{
		head = head->next;
		count++;
	}
	if (index > count)
		return (NULL);
	count = 0;
	while (count != index)
	{
		head = head->next;
		count++;
	}
	return (head);
}
