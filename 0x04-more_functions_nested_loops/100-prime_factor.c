#include <stdio.h>
/**
 * main - function that calculate the largest factor of a numbre
 *
 * Return: 0 on success
 */
int main(void)
{
	long int Mf;
	long int d = 2;
	long int n = 612852475143;

	while (n != 0)
	{
		if (n % d != 0)
		{
			d = d + 1;
		}
		else
		{
			Mf = n;
			n = n / d;
			if (n == 1)
			{
				printf("%ld\n", Mf);
				break;
			}
		}
	}
	return (0);
}
