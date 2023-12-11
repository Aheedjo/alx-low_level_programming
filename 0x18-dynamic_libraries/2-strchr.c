/**
* _strchr - function name
* @s: string
* @c: character to be located
*
* Description: a function that locates a char in a string
* Return: pointer to first occurance of c, or NULL if not found
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
