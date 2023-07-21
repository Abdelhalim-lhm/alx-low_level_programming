#include "main.h"

/**
 * print_triangle - function that print triangle
 *@size: number of #
 * Return: 0 on success
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j >= size - i)
					putchar('#');
				else
					putchar(' ');
			}
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
