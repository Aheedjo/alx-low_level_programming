/**
* _isalpha - function name
* @c: char to be checked
* Description: a function that checks for alphabetic character.
* Return: 0 if it is not an alphabet, otherwise return 1.
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
