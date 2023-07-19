#include <stdio.h>
/**
 * main - entrey
 * function that print the first febonaci terms
 * Return: 0 on success.
 */

int main(void)
{
	int i, f1, f2;
	unsigned int febo;

	febo = 0;
	f1 = 1;
	f2 = 2;
	printf("%d, %d,", f1, f2);
		for (i = 1 ; i <= 48 ; i++)
		{
			febo = f1 + f2;
			f1 = f2;
			f2 = febo;
		if (i < 48)
		{
			printf(" %i,", febo);
		}
		else if (i == 48)
		{
			printf("%i  ", febo);
		}
		}
	printf("\n");
	return (0);
}
