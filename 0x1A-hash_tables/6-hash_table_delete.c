#include "hash_tables.h"


/**
* hash_table_delete - the deletes a table from the memory
* @ht: the table
*/

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
			}
		}
	}
	free(ht->array);
	free(ht);
}
