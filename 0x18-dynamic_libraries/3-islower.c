/**
* _islower - function name
*@c: character to be checked
*
* Description: a function that checks for lowercase
* character.
* Return: 1 if lowercase and 0 otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
