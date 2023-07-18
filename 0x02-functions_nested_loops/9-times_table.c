#include "main.h"
/**
 * times_table - a function that print the time table
 * Return: 0 Always success
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9 ; i++)
	{
		k = 0;
			for (j = 0; j <= 9 ; j++)
			{
				if (j == 9 && k < 10)
				{
					_putchar(k + 48);
					_putchar('\n');
				}
				else if (j == 9 && k > 10)
				{
					_putchar((k / 10) + 48);
					_putchar((k % 10) + 48);
					_putchar('\n');
				}
				else if (k >= 10)
				{
					_putchar((k / 10) + 48);
					_putchar((k % 10) + 48);
					_putchar(',');
					_putchar(' ');
				}
				else if (j < 9 && k < 10)
				{
				_putchar(k + 48);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				}
			k = k + i;
			}
	}
}
