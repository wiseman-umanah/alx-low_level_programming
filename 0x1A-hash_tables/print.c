#include "hash_tables.h"


/**
* printd_contents - prints the contents of a hashtable
* @ht: the hash table
* @size: the size of the table
* Description: This funcion will print all the
* contents of the hash table in this format:
* [index of hashtable] --- [mem address] -- [key] -- [value]
*/

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
				printf("\t%lu --- [%p] ---", i, (void *)current);
				printf("key[%s]  value[%s]", current->key, current->value);
				current = current->next;
			}
			putchar('\n');
		}
	}
}
