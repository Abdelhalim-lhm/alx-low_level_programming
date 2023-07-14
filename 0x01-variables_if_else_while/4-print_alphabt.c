#include <stdio.h>
/**
 * main - Entry point
 * Description: 'task N°4'
 * Alphabet with exceptions
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z' && alpha != 'q' && alpha != 'e')
	{
		putchar(alpha);
		alpha++;
	}
		printf("\n");
	return (0);
}
