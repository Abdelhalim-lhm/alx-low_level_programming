#include "main.h"
/**
 * print_number - function that print num
 * @n: the numbre to print
 * Return: 0 on succes
 */
void print_number(int n)
{
	unsigned int u = n;

	if (n < 0)
	{
		u = -n;
		_putchar('-');
	}
	if (u >= 10)
	{
		print_number(u / 10);
	}
	_putchar(u % 10 + '0');
}
