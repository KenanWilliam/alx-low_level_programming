#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key in a hash table.
 *
 * @ht: The hash table to search.
 * @key: The key to search for.
 *
 * Return: The value associated with the key, or NULL if the key
 *         is not found, or on error.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    hash_node_t *node;
    unsigned long int index;

    if (!ht || !key || !strlen(key))  // Check for NULL or empty values
        return (NULL);

    index = key_index(key, ht->size); // Get the key's index

    node = ht->array[index];  // Start at the index's head

    // Traverse the linked list searching for the key
    while (node)
    {
        if (strcmp(node->key, key) == 0)  // Compare keys
            return (node->value);  // Return value if found
        node = node->next;
    }

    return (NULL);  // Key not found
}
