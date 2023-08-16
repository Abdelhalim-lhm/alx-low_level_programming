#include "calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that take 2 arguments and perfom an operation
 * @argc: number of argument
 * @argv: arguments vectors
 * Return: the result of an operation
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*calc)(int, int);
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	calc = get_op_func(operator);
	
	if (calc == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n",calc(num1, num2));
	return (calc(num1, num2));
}
