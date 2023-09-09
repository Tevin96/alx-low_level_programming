#include "main.h"
#include <stdio.h>

void copy_file_from_to(const char *file_from, const char *file_to);

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array
 * @fd: file descriptor
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int fd_file_from, fd_file_to, read_file, write_file;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_file_from = open(argv[1], O_RDONLY);
	if (fd_file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	}
	fd_file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((read_file = read(fd_file_from, buffer, 1024)) > 0)
	{
		write_file = write(fd_file_to, buffer, read_file);
		if (write_file == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (read_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	}
	if (close(fd_file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_file_from), exit(100);

	if (close(fd_file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_file_to), exit(100);
	return (0);
}
