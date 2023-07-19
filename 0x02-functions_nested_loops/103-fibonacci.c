#include <stdio.h>
/**
 * main - entrey
 * function that print the sum of the even-value
 * Return: 0 on success.
 */

int main(void)
{
	int febo, f1, f2, sum;

	f1 = 1;
	f2 = 2;
	sum = 0;
		while (f1 < 4000000)
		{
			if (f1 % 2 == 0)
			{
			sum = sum + f1;
			}
		febo = f1 + f2;
		f1 = f2;
		f2 = febo;
		}
			printf("%lu\n", sum);
			return (0);
}
