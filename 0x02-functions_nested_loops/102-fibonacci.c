#include <stdio.h>
/**
 * main - entrey
 * function that print the first febonaci terms
 * Return: 0 on success.
 */

int main(void)
{
	int i, f1, f2, febo;

	febo = 0;
	f1 = 0;
	f2 = 1;
	printf("%d, %d,", f1, f2);
		for (i = 2 ; i <= 50 ; i++)
		{
			febo = f1 + f2;
			f1 = f2;
			f2 = febo;
		if (i < 50)
		{
			printf(" %d,", febo);
		}
		else if (i == 50)
		{
			printf(" %d", febo);
		}
		}
	printf("\n");
	return (0);
}
