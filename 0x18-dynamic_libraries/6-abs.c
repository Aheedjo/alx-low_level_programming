/**
* _abs - function name
* @n : int
* Description: a function that computes the
* absolute value of an integer.
* Return: absolute value of n
*/
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		n = -n;
		return (n);
	}
}
