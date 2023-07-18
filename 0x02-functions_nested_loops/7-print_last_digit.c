#include "main.h"

/**
 * print_last_digit - function that print the last digit of a number
 *@n :is the number to check
 * Return: 0 Succes
 */

int print_last_digit(int n)
{
	if (n >= 0)
	{
		_putchar((n % 10) + '0');
		return (n % 10);
	}
	else
	{
		_putchar(-1 * (n % 10) + '0');
		return (-1 * (n % 10));
	}
}
