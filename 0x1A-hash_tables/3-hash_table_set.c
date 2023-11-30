#include "hash_tables.h"

hash_node_t *createNode(const char *key, const char *value);

/**
* hash_table_set - adds an element to the hash table
* @ht: hash table you want to add or update the key/value to
* @key: is the key
* @value: value associated with the key
* Return: 1 for success, 0 for failure
*/


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int num;
	hash_node_t *new_node, *curr;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	num = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[num];
	if (curr != NULL)
	{
		while (curr != NULL)
		{
			if (strcmp(curr->key, key) == 0)
			{
				free(curr->value);
				curr->value = malloc(strlen(value) + 1);
				strcpy(curr->value, value);
				return (1);
			}
			curr = curr->next;
		}
		new_node = createNode(key, value);
		if (new_node == NULL)
			return (0);
		new_node->next = ht->array[num];
		ht->array[num] = new_node;
	}
	else
	{
		new_node = createNode(key, value);
		if (new_node == NULL)
			return (0);
		new_node->next = ht->array[num];
		ht->array[num] = new_node;
	}
	return (1);
}


/**
* createNode - creates a new node to be added to hash_table
* @key: is the key
* @value: value associated with the key
* Return: returns the new_node created
*/

hash_node_t *createNode(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_node->key = malloc(strlen(key) + 1);
	new_node->value = malloc(strlen(value) + 1);
	if (new_node->key == NULL || new_node->value == NULL)
		return (NULL);
	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
	return (new_node);
}
