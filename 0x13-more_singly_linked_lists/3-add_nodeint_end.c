#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint_end - adds new node to end of list
* @head: pointer to linked list
* @n: number to bestored in linked list
* Return: returns pointer to linked list
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temp;

	temp = newnode = malloc(sizeof(listint_t));
	if (newnode == NULL || temp == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	if (*head == NULL)
		*head = newnode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}
