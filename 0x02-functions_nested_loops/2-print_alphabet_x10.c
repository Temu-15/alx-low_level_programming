# include "main.h"
/**
 * print_alphabet_x10 : prints the alphabet ten times 
 *
 * Return : Always 0.
 */
void print_alphabet_x10(void)
{
	char ch[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	for (i = 0 ; i < 10 ; i++)
	{
		int j;
		for (j = 0 ; j < 26 ; j++)
		{
			_putchar(ch[j]);
		}
		_putchar('\n');
	}
}
