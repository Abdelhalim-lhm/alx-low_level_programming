#include "main.h"
/**
 * puts_half - function that print half the string
 * @str : the string to print
 * Return: 0 on succes
 */
void puts_half(char *str)
{
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		i++;
	}

		for (j = i / 2 ; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	_putchar('\n');
}
