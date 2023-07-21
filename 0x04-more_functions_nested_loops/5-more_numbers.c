#include "main.h"

/**
 * more_numbers - function that print 013567891011121314 10 times
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0 ; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + 48);
			}
		_putchar(i % 10 + 48);	
		}
	_putchar('\n');
	}
}
