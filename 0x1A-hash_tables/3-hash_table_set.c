#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	 unsigned long int index;
    hash_node_t *new_node, *temp;

    if (ht == NULL || key == NULL || *key == '\0')
        return (0);

    // Calculate the index using the provided hash function
    index = hash_djb2((unsigned char *)key) % ht->size;

    // Check if the key already exists, update its value
    temp = ht->array[index];
    while (temp != NULL)
    {
        if (strcmp(temp->key, key) == 0)
        {
            free(temp->value);  // Free the previous value
            temp->value = strdup(value);
            if (temp->value == NULL)
                return (0);  // Memory allocation failure
            return (1);  // Success
        }
        temp = temp->next;
    }

    // Allocate memory for the new node
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return (0);  // Memory allocation failure

    // Duplicate the key and value
    new_node->key = strdup(key);
    new_node->value = strdup(value);

    if (new_node->key == NULL || new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node->value);
        free(new_node);
        return (0);  // Memory allocation failure
    }

    // Add the new node at the beginning of the list
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1);  // Success
}
