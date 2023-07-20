#include "main.h"

/**
 * print_line - function that print n line
 *@n: number of line _
 * Return: 0 on success
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
