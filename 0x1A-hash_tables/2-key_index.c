#include "hash_tables.h"

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int value;

    if (key == NULL)
        return (0);
    value = hash_djb2(key);
    value = value % size;
    return (value);
}