#include "main.h"
/**
 * print_number - function that print num
 * @n: the numbre to print
 * Return: 0 on succes
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n >= 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
