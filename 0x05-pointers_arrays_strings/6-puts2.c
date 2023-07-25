#include "main.h"
/**
 * puts2 - function that print every other character
 * @str : the string to print
 * Return: 0 on succes
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *str != '\0'; str++)
	{
		if (i % 2 == 0)
		{
			_putchar(*str + 0);
			i++;
		}
		else
		{
			i++;
		}
	}
	_putchar('\n');
}
