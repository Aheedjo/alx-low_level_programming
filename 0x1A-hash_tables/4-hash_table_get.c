#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key.
 * @ht: ht is the hash table you want to look into
 * @key: he key you are looking for
 * Return: the value associated with the element,
 *	or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];
	if (temp)
	{
		while (strcmp(temp->key, key) != 0)
			temp = temp->next;
		if (temp)
			return (temp->value);
	}
	return (NULL);
}
