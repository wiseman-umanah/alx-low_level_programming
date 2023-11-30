#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *current, *temp;
    unsigned long int i;

    for (i = 0; i < ht->size; i++)
    {
        if (ht->array[i] != NULL)
        {
            current = ht->array[i];
            while (current != NULL)
            {
                temp = current;
                current = current->next;
                free(temp->key);
                free(temp->value);
                free(temp);
                printf("%p %p\n", current, temp);
            }
        }
    }
    free(ht->array);
    free(ht);
}