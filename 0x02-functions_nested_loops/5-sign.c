#include "main.h"
/**
 * print_sign - prnts the sign of a number
 * @n: takes input as an integer
 *
 * Return: Always 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if else(n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
