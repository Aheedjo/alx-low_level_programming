#include "main.h"

/**
* _strncat - function name
* @dest: destination str
* @src: source str
* @n: max bytes to be copied from src
*
* Description: a function that prints the alphabet
* Return: pointer to the resulting dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int d_len, s_len, i;

	d_len = _strlen(dest);
	s_len = _strlen(src);

	for (i = 0; i < n && i < s_len; i++)
	{
		dest[d_len] = src[i];
		d_len++;
		if (s_len < n)
		{
			dest[d_len + 1] = '\0';
		}
	}
	return (dest);
}
