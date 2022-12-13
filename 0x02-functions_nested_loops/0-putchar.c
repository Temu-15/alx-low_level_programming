# include "main.h"
/*
 * main : prints a string folowed by a new line
 * Desciption : these program prints _putchar using main
 * Return : always 0
 */
int main(void)
{
	char ch[] = "-putchar";

	for (int i = 0 ; i < 8 ; i++)
	{
		_putchar(ch[i]);
	}

	_putchar('\n');
	return (0);
}
