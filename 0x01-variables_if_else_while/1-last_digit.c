#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'task N°1'
 * 0. Positive anything is better than negative nothing
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last < 6 && last != 0)
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	else if (last > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else
	printf("Last digit of %d is %d and is 0\n", n, n % 10);
	return (0);
}
