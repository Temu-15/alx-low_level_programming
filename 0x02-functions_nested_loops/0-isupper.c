# include "main.h"
/**
 * _isupper - a function to check whether a character is upper case
 * @c: c is an integer or an ascii code of a character
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
