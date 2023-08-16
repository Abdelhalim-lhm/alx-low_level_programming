#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that print the opcodes of its own main function
 * @argc: number of arguments
 * @argv: arguments vectors
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;
	for (i = 0; i < atoi(argv[1]); i++)
	{
		if (i == atoi(argv[1]) - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		else
		{
			printf("%02hhx ", arr[i]);
		}
	}
	return (0);
}
