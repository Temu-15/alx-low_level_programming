# include "main.h"
/**
 * _islower : checks whether a character is small
 *
 * Return : Always 0.
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		_putchar(1);
	}
	else
	{
		_putchar(0);
	}

	return (0);
}
