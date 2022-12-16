# include "main.h"
/**
 * _isupper - checks whether a character is uppercase or not
 * @c: takes an integer as an argument
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
