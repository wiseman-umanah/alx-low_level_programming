#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
    size_t n;

    n = 0;
    for (; h != NULL; n++)
        h = h->next;
    return (n);
}
