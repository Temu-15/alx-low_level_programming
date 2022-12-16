# include "main.h"
# include <stdio.h>
/**
 * print_most_numbers - prints the most numbers from 0 to 9
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i == 4 || i == 2)
		{
			continue;
		}
		else
		{
			_putchar(c + '0');
		}
	}
	_putchar('\n');
}

