#include "main.h"

/**
 * print_sign - function that Returns 1 if n positive
 * 0 if zero and -1 if négative
 * @n: is the number to check
 *
 * Return: 0 Succes
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
