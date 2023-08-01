#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint - adds new node to beginning of linked list
* @head: the pointer to linked list
* @n: number to include in linked list
* Return: retute=rns pointer to linked list
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
