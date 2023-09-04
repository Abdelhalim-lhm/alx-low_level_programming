#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: file name
 * @text_content: text to print in the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fn, output;

	if (!filename)
		return (-1);
	fn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fn == -1)
		return (-1);
	output = write(fn, text_content, sizeof(text_content));
	if (output == -1)
	{
		close(fn);
		return (-1);
	}
	return (1);
}
