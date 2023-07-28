#include "lists.h"
#include <stdlib.h>

/**
* free_list - free the memory
* @head: head pointer of linked list
* Return: void
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(temp->str);
		head = head->next;
		free(temp);
	}
}
