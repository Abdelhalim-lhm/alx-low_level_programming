#include "main.h"
/**
 * main - function that cp a file into a another
 * @ac: number of argument
 * @av: file arguments
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int FD_VALUE, FD_VALUE2, fn, fn2, output;
	char string[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	fn2 = open(av[1], O_RDONLY);
	if (fn2 == -1)
	{
		dprintf(2, "Error: Can't read from %s\n", av[1]);
		exit(98);
	}
	fn = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fn == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((output = read(fn2, string, sizeof(string))) > 0)
	{
		if (write(fn, string, output) == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (output == -1)
	{
		dprintf(2, "Error: Can't read from %s\n", av[1]);
		exit(98);
	}
	FD_VALUE = close(fn);
	FD_VALUE2 = close(fn2);
	if (FD_VALUE == -1 || FD_VALUE2 == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", -1), exit(100);
	}
	return (0);
}
