#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generate a random password with 2772 sums up characters
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char password[100];
	int n, i, sum = 0;

	srand(time(NULL));
	for (i = 0; i < 100; i++)
	{
		password[i] = rand() % 126;
		sum += password[i];
		putchar(password[i]);
		if (sum >= 2772)
		{
			n = sum - 2772;
			sum -= n;
			putchar(n);
			break;
		}
	}
	return (0);
}
