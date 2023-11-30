#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
    hash_node_t *current;
    unsigned long int index;

    index = key_index(key, ht->size);
    current = ht->array[index];
    while (current != NULL)
    {
        if (strncmp(current->key, key, strlen(key)) == 0)
            return(current->value);
        current = current->next;
    }
    return (NULL);
}