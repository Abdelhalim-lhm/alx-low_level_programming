#include "main.h"

/**
 * print_number - function that print an integer
 *@n : is the number
 */

void print_number(int n)
{
	unsigned int test = n;

	if (n < 0)
	{
		_putchar('-');
		test = -test;
	}
	if (test / 10 > 0)
		print_number(test / 10);
	_putchar(test % 10 + 48);
}
