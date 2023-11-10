#include "lists.h"

void free_dlistint(dlistint_t *head)
{
    dlistint_t *temp;

    temp = head;
    if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
    while (head != NULL)
    {
        temp = head;
        free(temp);
        head = head->next;
    }
}