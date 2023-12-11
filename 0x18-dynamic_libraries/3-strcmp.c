#include  "main.h"

/**
* _strcmp - function name
* @s1: first str
* @s2: second str
*
* Description: a function that compares two strings
* Return:  0, if the s1 and s2 are equal
* a negative value if s1 is less than s2
* a positive value if s1 is greater than s2.
*/

int _strcmp(char *s1, char *s2)
{
	int result;

	while ((*s1 && *s2) && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	result  = (*s1 - *s2);
	return (result);
}
