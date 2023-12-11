/**
* _isdigit - function name
* @c: int to be checked
*
* Description: a function that checks for digit
* Return: 0 (success)
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
