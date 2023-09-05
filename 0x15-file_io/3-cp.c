#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
/**
 * main - function that cp a file into a another
 * @ac: number of argument
 * @av: file arguments
 * Return: 1 on success
 */
int main(int ac, char **av)
{
	int FD_VALUE, FD_VALUE2, fn, fn2, output;
	char string[1024 * 8];

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	fn2 = open(av[1], O_RDONLY);
	if (fn2 == -1 || !av[1])
	{
		dprintf(2, "Error: Can't read from %s\n", av[1]);
		exit(98);
	}
	fn = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fn == -1 || !av[2])
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	output = read(fn2, string, sizeof(string));
	if (output == -1)
	{
		dprintf(2, "Error: Can't read from %s\n", av[1]);
		exit(98);
	}
	output = write(fn, string, output);
	if (output == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	FD_VALUE = close(fn);
	FD_VALUE2 = close(fn2);
	if (FD_VALUE == -1 || FD_VALUE2 == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", errno);
		exit(100);
	}
	return (1);
}
