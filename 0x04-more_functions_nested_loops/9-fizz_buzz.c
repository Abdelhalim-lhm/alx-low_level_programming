#include "main.h"

/**
 * main - function that print fizz Buzz
 *
 * Return: 0 on seuccess
 */

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("Buzz\n");
return (0);
}
