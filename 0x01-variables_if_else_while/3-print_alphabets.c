#include <stdio.h>
/**
 * main - Entry point
 * Description: 'task N°3'
 * Alphabets
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
	putchar(alpha);
	alpha++;
	}
	alpha = 'A';
	while (alpha <= 'Z')
	{
	putchar(alpha);
	alpha++;
	}
	printf("\n");
	return (0);
}
