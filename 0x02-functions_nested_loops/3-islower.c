# include "main.h"
/**
 * _islower - checks for the small letter
 * @c : is the number given
 *
 * Description : returns int type
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
