#include "main.h"

/**
* _strcpy - function name
* @dest: destination add
* @src: source add
*
* Description: a function that copies the strng from
* a src to dest
* Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
