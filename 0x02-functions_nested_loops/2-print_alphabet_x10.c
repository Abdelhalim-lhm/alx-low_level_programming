#include "main.h"

/**
 * print_alphabet_x10 - function that print lowcase alphabet
 *
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10 ; i++)
	{
		int ch = 'a';

		for (ch = 'a'; ch <= 'z'; ch++)
		{
		_putchar(ch);
		}
	_putchar('\n');
	}
}
