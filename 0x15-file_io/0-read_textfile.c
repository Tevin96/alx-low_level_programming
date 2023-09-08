#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print
 * 0 if the file can not be opened or read
 * 0 if filename is NULL
 * 0 if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t read_file, write_file;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (!buffer || !filename)
		return (0);

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
	{
		free(buffer);
		return (0);
	}
	read_file = read(file_d, buffer, letters);
	if (read_file == -1)
	{
		free(buffer);
		close(file_d);
		return (0);
	}
	write_file = write(STDOUT_FILENO, buffer, read_file);
	if (write_file == -1)
	{
		free(buffer);
		close(file_d);
		return (0);
	}
	free(buffer);
	close(file_d);
	return (write_file);
}
