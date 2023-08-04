#include <stdio.h>
/**
 * main - function that prints all arguments it receives
 * @argc: argments count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
