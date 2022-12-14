#include "main.h"
#include <stdio.h>

/**
 * _abs - prints the absolute value of an integer
 * @n: takes an integer n as an input
 *
 * Return: Always 0.
 */
int _abs(int n)
{

	if (n < 0)
	{
		return (n * (-1));
	}

	else if (n == 0)
	{
		return (0);
	}

	else
	{
		return (n);
	}

}
