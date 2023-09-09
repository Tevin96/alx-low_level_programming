#include "main.h"
#include <stdio.h>

/**
 * fd_file - checks if files can be opened.
 * @fd_file_from: file_from
 * @fd_file_to: file_to
 * @argv: array
 * Return: 0 (success)
 */
void fd_file(int fd_file_from, int fd_file_to, char *argv[])
{
	if (fd_file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fd_file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: array
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int fd_file_from, fd_file_to, fd_error_file;
	ssize_t narrays, fd;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	fd_file_from = open(argv[1], O_RDONLY);
	fd_file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	fd_file(fd_file_from, fd_file_to, argv);

	narrays = 1024;
	while (narrays == 1024)
	{
		narrays = read(fd_file_from, buffer, 1024);
		if (narrays == -1)
			fd_file(-1, 0, argv);
		fd = write(fd_file_to, buffer, narrays);
		if (fd == -1)
			fd_file(0, -1, argv);
	}
	fd_error_file = close(fd_file_from);
	if (fd_error_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_file_from);
		exit(100);
	}
	fd_error_file = close(fd_file_to);
	if (fd_error_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_file_from);
		exit(100);
	}
	return (0);
}
