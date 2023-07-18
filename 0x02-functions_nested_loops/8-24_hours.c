#include "main.h"

/**
 * jack_bauer - function that print the 24 hours of a day
 * Return: 0 Succes
 */

void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 2 ; i++)
	{
		for (j = 0 ; j <= 9; j++)
		{
			for (k = 0 ; k <= 5; k++)
			{
				for (l = 0 ; l <= 9; l++)
				{
					if (i == 2 && j == 4)
					{
						return;
					}
					else
					{

						_putchar(i + '0');
						_putchar(j + '0');
						_putchar(58);
						_putchar(k + '0');
						_putchar(l + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
