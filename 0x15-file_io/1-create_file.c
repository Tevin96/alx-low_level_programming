#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 * -1 if filename is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int file_d;
	int text;
	int write_file;

	if (!filename)
		return (-1);

	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_d == -1)
		return (-1);

	if (!text_content)
	{
		close(file_d);
		return (1);
	}
	for (text = 0; text_content[text]; text++)
		;
	write_file = write(file_d, text_content, text);
	if (write_file == -1)
	{
		close(file_d);
		return (-1);
	}
	close(file_d);
	return (1);
}
