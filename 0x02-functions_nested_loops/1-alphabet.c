#include "main.h"

/**
 * print_alphabet - function that print lowcase alphabet
 * Return: On succes 1.
 */

int print_alphabet(void)
{
	int ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	return (0);
}
