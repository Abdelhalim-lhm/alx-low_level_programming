#include "main.h"
/**
 * read_textfile -  function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: file name
 * @letters: number of lettres to be read
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fn;
	char string[1024];
	ssize_t output, count;

	if (filename == NULL || letters > 1024)
		return (0);
	fn = open(filename, O_RDONLY);
	if (fn == -1)
		return (0);

	count = read(fn, string, letters);
	if (count == -1)
	{
		close(fn);
		return (0);
	}
	output = write(STDOUT_FILENO, string, count);
	close(fn);
	if (output == -1 || output > count)
	{
		return (0);
	}
	return (output);
}
