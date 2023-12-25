/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	/*Initialize the hash to a constant value (5381 is a commonly used prime)*/
	hash = 5381;

	/*Loop through each character in the string*/
	while ((c = *str++))
	{
		/*
		 * Update the hash value using a bitwise left shift and addition
		 * The expression (hash << 5) + hash is equivalent to hash * 33 + c
		 * hash = ((hash << 5) + hash) + c;
		*/

		hash = ((hash << 5) + hash) + c;
	}


	return (hash);
}
