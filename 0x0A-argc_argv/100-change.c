#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * coin_test - function that count coins
 * @n: the number to count
 * @count: count index
 * Return: 0 on success
 */
int coin_test(int n, int count)
{
	if (n >= 25)
	{
		n = n - 25;
		count++;
		return (coin_test(n, count));
	}
	else if (n >= 10)
	{

		n = n - 10;
		count++;
		return (coin_test(n, count));
	}
	else if (n >= 5)
	{
		n = n - 5;
		count++;
		return (coin_test(n, count));
	}
	else if (n >= 2)
	{
		n = n - 2;
		count++;
		return (coin_test(n, count));
	}
	else if (n >= 1)
	{
		n = n - 1;
		count++;
		return (coin_test(n, count));
	}
	else
	{
		return (count);
	}
}
/**
 * main - function that prints the minimum
 * number of coins to make change for an amount of money
 * @argc: argments count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i, j, count = 0;

	if (argc == 2)
	{
		if (atoi(argv[1]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		if (atoi(argv[1]) < 0)
		{
			printf("0\n");
			return (0);
		}
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		count = coin_test(atoi(argv[1]), 0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", count);
	return (0);
}
