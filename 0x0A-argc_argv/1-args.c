#include <stdio.h>
/**
 * main - function that prints the number of arguments passed into it
 * @argc: argments count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
