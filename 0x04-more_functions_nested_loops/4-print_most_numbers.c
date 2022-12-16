# include "main.h"
# include <stdio.h>
/**
 * print_most_numbers - prints the most numbers from 0 to 9
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0' ; c < '10' ; c++)
	{
		if (c == '4' || c == '2')
		{
			continue;
		}
		else
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}

