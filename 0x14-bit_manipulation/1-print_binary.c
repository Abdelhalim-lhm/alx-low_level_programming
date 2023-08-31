#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to convert
 * Return: the converted number in binary
 */
void print_binary(unsigned long int n)
{
	int i = 0, bit = 0;

	while (i < 64)
	{
		if ((n >> i) & 1)
			bit = i;
		i++;
	}
	for (i = bit; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
