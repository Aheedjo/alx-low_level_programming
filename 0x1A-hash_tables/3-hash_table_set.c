#include "hash_tables.h"

/**
* hash_table_set - a function to add element to a hash table
* @ht: the hash table
* @key: the key to be used to access value
* @value: the value associated with the key
*
* Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *head;
	unsigned long int index;

	/* Error handling: hash table must exist and key not null */
	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];
	/* Check if key already exists at index*/
	while (head)
	{
		/* check to see if the key is the same or it's a collision */
		if (strcmp(head->key, key) == 0)
		{
			/* it's not a collision, update value */
			free(head->value);
			head->value = strdup(value);
			return (1);
		}
		head = head->next;
	}

	/* key doesn't exits, create node */
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key = strdup(key);
	if (node->key == NULL)
	{
		/* key can't be null */
		free(node);
		return (0);
	}
	node->value = strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
