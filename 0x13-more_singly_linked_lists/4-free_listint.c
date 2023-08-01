#include "lists.h"
#include <stdlib.h>

/**
* free_listint - free the memory
* @head: head pointer of linked list
* Return: void
*/
void free_listint(listint_t *head)
{
        listint_t *temp;

        while (head != NULL)
        {
                temp = head;
                head = head->next;
                free(temp);
        }
}