#include <stdio.h>
/**
 * main - Entry point
 * Description: 'task N°8'
 * HEXA
 * Return: Always 0 (Success)
 */

int main(void)
{
	char hex = '0';

	while (hex <= '9')
	{
	putchar(hex);
	hex++;
	}
	hex = 'a';
	while (hex <= 'f')
	{
	putchar(hex);
	hex++;
	}
	putchar('\n');
	return (0);
}
