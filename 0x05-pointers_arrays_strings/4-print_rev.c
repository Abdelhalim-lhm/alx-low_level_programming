#include "main.h"
/**
 * print_rev - function that print the string in reverse
 * @s : the character to print
 * Return: 0 on succes
 */
void print_rev(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i])
		i++;

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
