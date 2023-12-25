#include "hash_tables.h"

/**
 * hash_table_print -  a function that prints a hash table.
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int delim = 0;

	if (ht == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			if (delim)
			{
				printf(", ");
				delim = 0;
			}
			print_node(ht->array[i]);
			delim = 1;
		}
		i++;
	}
	printf("}\n");
}

/**
 * print_node - prints a node
 * @n: pointer to a node
 */
void print_node(hash_node_t *n)
{
	if (n == NULL)
		return;
	printf("'%s': '%s'", n->key, n->value);
	if (n->next)
	{
		printf(", ");
		print_node(n->next);
	}
}
