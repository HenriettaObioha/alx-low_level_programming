#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints it to POSIX s.o
 * @filename: filename pointer
 * @letters: number of letters to r and print
 * Return: number of letters read and 0 if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer; /* buffer declared*/

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (filename == NULL)
		return (0);
	if (o == -1 || r == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(o);

	return (w);
}

