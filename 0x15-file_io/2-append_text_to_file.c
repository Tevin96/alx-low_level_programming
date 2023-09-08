#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 * -1 If filename is NULL
 * 1 if the file exists and -1 if the file does not exist
 * or if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d;
	int text;
	int write_file;

	if (!filename)
		return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND);
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
