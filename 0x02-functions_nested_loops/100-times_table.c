#include "main.h"
/**
 * print_times_table - a function that print n table time
 * @n: range of the table
*/
void print_times_table(int n)
{

	int i, j, k;

		if (n >= 0  && n <= 15)
		{
			for (i = 0; i <= n ; i++)
			{
			_putchar(48);
				for (j = 1 ; j <= n; j++)
				{
					_putchar(',');
					_putchar(' ');
					k = i * j;
					if (k <= 9)
						_putchar(' ');
					if (k <= 99)
						_putchar(' ');

					if (k > 99)
					{
						_putchar((k / 100) + 48);
						_putchar((k / 10) % 10 + 48);
					} else if (k >= 10 && k <= 99)
						_putchar((k / 10) % 10 + 48);
					_putchar((k % 10) + 48);
				}
				_putchar('\n');
			}
		}
}
