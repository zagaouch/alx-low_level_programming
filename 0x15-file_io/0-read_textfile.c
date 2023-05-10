#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 * @filename: file to read from
 * @letters: size to read
 * Return: actual size read and printed ,  or 0 
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t numr;
	ssize_t numw;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	numr = read(fd, buffer, letters);
	if (numr == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	numw write(STDOUT_FILENO, buffer, numr);
	if (numw == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	return (numr);

}
