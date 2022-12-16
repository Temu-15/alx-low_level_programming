# include "main.h"
/**
 * _isdigit - finds digitd from 0 to 9
 * @c: takes an argument
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
	int i;
	int k;

	i = 10;
	k = c / i;
	if (k == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
