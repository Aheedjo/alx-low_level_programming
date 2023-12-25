#include "hash_tables.h"

/**
* key_index - a function that gives the index of the key
* @key: the key to be hashed
* @size: the size of the array of the hash table
*
* Return: Returns the index at which the key/value pair
*	should be stored in the array of the hash table
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	/* get the hash of the string using the djb2 algorithm */
	hash = hash_djb2(key);

	/* use mod to make sure the index is within the range of the array */
	return (hash % size);
}
