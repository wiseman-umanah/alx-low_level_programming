#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
    int sum;

    if (head != NULL)
        while (head->prev != NULL)
            head = head->prev;
    else 
        return (0);
    sum = 0;
    while (head != NULL)
    {
        sum += head->n;
        head = head->next;
    }
    return (sum);
}
