#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
/**
 * check_str - function that check if a string is all digit
 * @str: the string to check
 * Return: 0 on success
 */
int check_str(char *str)
{
	unsigned int i;

	for (i = 0; i < strlen(str); i++)
	{
		if (isdigit(str[i]) == false)
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (0);
}
/**
 * main - function that multiply 2 positive integers
 * @argv: argument value
 * @argc: number of argument
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		check_str(argv[1]);
		check_str(argv[2]);
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
