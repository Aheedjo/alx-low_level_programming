/**
* _strspn - function name
* @s: string
* @accept: substring
*
* Description: a function that gets the length of a substring
* Return: number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (count);
			}
		}
		s++;
	}
	return (count);
}
