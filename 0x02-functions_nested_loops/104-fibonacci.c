#include <stdio.h>

/**
 * main - entrey
 * function that print the first febonaci terms
 * Return: 0 on success.
 */
int len(int n)
{
	int l = 0;

	if (!n)
	{
		return (1);
	}

	while (n)
	{
		n = n / 10;
		len = len + 1;
	}

	return (len);
}


int main(void)
{
	int i, j;
	unsigned long feb, f1, f2, fo1, fo2, febo, num;

	feb = 0;
	f1 = 1;
	f2 = 2;
	fo1 = 0;
	fo2 = 0;
	febo = 0;
	num = 10000000;
		for (i = 1 ; i <= 98 ; i++)
		{
			if (fo1 > 0)
				printf("%lu", fo1);
			j = len(num) - 1 - len(f1);
				while (fo1 > 0 && j > 0)
				{
					printf("%d", 0);
					j--;
				}
				printf("%lu", f1);

				feb = (f1 + f2) % num;
				febo = fo1 + fo2 + (f1 + f2) / num;
				f1 = f2;
				f2 = feb;
				fo1 = fo2;
				fo2 = febo;
				if (i != 98)
				{
					printf(", ");
				}
				else
				{
					printf("\n");
				}
		}
	return (0);
}
