#include <stdio.h>
/**
 * main - entrey
 * function that print the sum of the even-value
 * Return: 0 on success.
 */

int main(void)
{
	unsigned long int febo, f1, f2, sum;

	febo = 0;
	f1 = 1;
	f2 = 2;
	sum = 0;
		while (febo < 4000000)
		{
			if (febo % 2 == 0)
			{
			sum = sum + febo;
			}
		febo = f1 + f2;
		f1 = f2;
		f2 = febo;
		}
			printf("%lu", sum);
			return (0);
}
