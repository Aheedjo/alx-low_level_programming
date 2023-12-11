#include "main.h"

/**
 * _strlen - function name
 * @s: string to work with
 *
 * Description: a function that returns the length of a str
 * Return: length of string int
 */

int _strlen(char *s)
{
        int i;

        i = 0;
        while (*s)
        {
                i++;
                s++;
        }
        return (i);

}

/**
* _strcat - function name
* @dest: destination str
* @src: src string
*
* Description: a function that concats two strings
* Return: a pointer to the resulting dest
*/

char *_strcat(char *dest, char *src)
{
	int d_len, s_len, i;

	d_len = _strlen(dest);
	s_len = _strlen(src);

	for (i = 0; i < s_len; i++)
	{
		dest[d_len] = src[i];
		d_len++;
	}
	dest[++d_len] = '\0';
	return (dest);
}
