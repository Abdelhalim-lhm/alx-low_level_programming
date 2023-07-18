#include "main.h"

/**
 * print_alphabet - function that print lowcase alphabet
 * Return: 0 Always (Success)
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
