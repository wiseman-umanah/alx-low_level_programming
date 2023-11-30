#include "hash_tables.h"

void printd_contents(hash_table_t *ht, unsigned long int size)
{
    hash_node_t *current;

    unsigned long int i;

    for (i = 0; i < size; i++)
    {
        if (ht->array[i] != NULL)
        {
            current = (ht->array[i]);
            while (current != NULL)
            {
                printf("\t%lu --- [%p] --- key[%s]  value[%s]", i, current, current->key, current->value);
                current = current->next;
            }
            putchar('\n');
        }
    }
}