#include "hash_tables.h"


/**
* hash_table_create - This code creates a new hash table
* @size: This is the size of the array
* Return: this returns the newly created array
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *arr;
	unsigned int i;

	arr = malloc(sizeof(hash_table_t));
	if (arr == NULL)
		return (NULL);
	arr->size = size;
	arr->array = malloc(sizeof(hash_node_t *) * size);
	if (arr->array == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		arr->array[i] = NULL;
	return (arr);
}
