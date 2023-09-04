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
	fn = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fn == -1)
		return (-1);
	if (!text_content)
	{
		output = write(fn, text_content, strlen(text_content));
		close(fn);
		if (output == -1)
		{
			return (-1);
		}
	}
	return (1);
}
