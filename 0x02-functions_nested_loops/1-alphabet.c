#include "main.h"
/**
 * print_alphabet -prints the english alphabet letters
 *
 * Description : prints and checked
 * Return : Always 0.
 */
void print_alphabet(void)
{
	char alph[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0 ; i < 26 ; i++)
	{
		_putchar(alph[i]);
	}
	_putchar('\n');
}
