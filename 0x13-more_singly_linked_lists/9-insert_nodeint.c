#include "lists.h"
#include <stdlib.h>

/**
* insert_nodeint_at_index - insert node at index specified
* @head: double pointer to linked list
* @idx: index to insert new node
* @n: number to add in new node
* Return: returns pointer to linke list
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *newnode;
	unsigned int count;

	newnode =  malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	if (idx == 0)
	{
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	count = 0;
	new = *head;
	while (count != (idx - 1))
	{
		new = new->next;
		count++;
	}
	newnode->n = n;
	newnode->next = new->next;
	new->next = newnode;
	return (newnode);
}
