#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - allocates 1024 to buffer
 * @file: file buffer to store chars
 * Return: pointer to new allocated buffer
 */

char *create_buffer(char *file)
{
	char *buffer; /* buffer declared */

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - closes file descriptor
 * @fd: file descriptor to be closed.
 */

void close_file(int fd)
{
	int a; /* varaiable declared */

	a = close(fd);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies file content to another file
 * @argc: number of arg. supplied to program
 * @argv: array pointers to arguments
 * Return: 0n success, 0
 * Desc: if arg. count is incorrect, exit code 97.
 * if file_from doesn't exit, exit code 98.
 * if file_to cannot be created, exit code 99.
 * if file_to/file_from cannot be closed, exit code is 100.
 */

int main(int argc, char *argv[])
{
	int r, w, to, from; /* declarations */
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
        to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
        from = open(argv[1], O_RDONLY);
        buffer = create_buffer(argv[2]);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);

		if (w == -1 || to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	}

	while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}



