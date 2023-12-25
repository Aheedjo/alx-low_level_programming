#include "hash_tables.h"

/**
* hash_table_create - a function that creates a hash table.
* @size: size is the size of the array
*
* Return: a pointer to the newly created hash table
*	If something went wrong, your function should return NULL
*/


hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	/*allocate memory for the hash table*/
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
