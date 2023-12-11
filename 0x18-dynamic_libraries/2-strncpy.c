/**
* _strncpy - function name
* @dest: destination str
* @src: source str
* @n: number of chars to be copied
*
* Description: a function that copies a string
* Return: return a pointer to the destination str
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
