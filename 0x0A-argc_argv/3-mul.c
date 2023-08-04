#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that multiplies two numbers
 * @argc: argments count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
