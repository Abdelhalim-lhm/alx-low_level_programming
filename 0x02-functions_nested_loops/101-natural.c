#include <stdio.h>
/**
 * main - entrey
 * function that print the sum of the multiple off 3 and 5
 * Return: 0 on success.
 */

int main(void)
{
	int i, sum;

	sum = 0;

	for (i = 0 ; i < 1024 ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf(" the sum is equal to : %d\n", sum);
	return (0);
}
