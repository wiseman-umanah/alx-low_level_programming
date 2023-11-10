#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int i;
    dlistint_t *temp;

    if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
    i = 0;
    temp = head;
    if (temp != NULL)
        while (temp->next != NULL)
        {
            temp = temp->next;
            i++;
        }
    if (index > i)
        return (NULL);
    for (i = 0; head != NULL && i < index; i++)
        head = head->next;
    return(head);
}