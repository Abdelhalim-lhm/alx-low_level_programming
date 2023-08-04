#include "main.h"
/**
 * _puts - function that print a string
 * @str : the character to print
 * Return: 0 on succes
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; str++)
	{
		_putchar(*str + 0);
		i++;
	}
	_putchar('\n');
}
