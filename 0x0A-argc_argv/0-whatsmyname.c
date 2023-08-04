#include <stdio.h>
/**
 * main - function that print the name of the file
 * @argc: argments count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
