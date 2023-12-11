/**
* _strpbrk - function name
* @s: string to be searched
* @accept: set of bytes
*
* Description: a function that searches a string for any
* set of bytes
* Return: a pointer to the byte in s that matches, or NULL
* otherwise
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}
