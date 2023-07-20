#include "main.h"

/**
 * print_numbers - function that print 0123456789
 *
 * Return: 0 on success
 */

void print_numbers(void)
{
	char i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);

	}
	_putchar('\n');
}
