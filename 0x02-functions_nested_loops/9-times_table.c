#include "main.h"
/**
 * times_table - a function that print the time table
*/
void times_table(void)
{
	int i, j, k;

	for (i = 1; i <= 9 ; i++)
	{
		k = 0;

			for (j = 0; j <= 9 ; j++)
			{
				if (k >= 10 && j < 9)
				{
					putchar((k / 10) + 48);
					putchar((k % 10) + 48);
					putchar(',');
				}
				else if (k < 10 && j < 9)
				{
					if (k + i < 10)
					{
						putchar(k + 48);
						putchar(',');
						putchar(' ');
					}
					else
					{
						putchar(k + 48);
						putchar(',');
					}
				}
				else if (j == 9 && k < 10)
				{
					putchar(k + 48);
				}
				else if (j == 9 && k >= 10)
				{
					putchar((k / 10) + 48);
					putchar((k % 10) + 48);
				}
			putchar(' ');
			k = k + i;
			}
		putchar('\n');
	}
}
