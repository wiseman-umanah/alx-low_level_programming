#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
* add_node_end - adds new item to linked list
* @head: head node
* @str: the string to add
* Return: returns pointer to new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	newnode = (struct list_t *)malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
