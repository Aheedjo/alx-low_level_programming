#include "main.h"

/**
* _puts - function name
* @str: string to be printed
*
* Description: a function that prints a string
* Return: void
*/

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
