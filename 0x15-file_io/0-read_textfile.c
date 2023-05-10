#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it
 * @filename: the path name of the file
 * @letters: the number of letters it should read and print
 * Return: number of letters, or 0 if NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t numr;
	ssize_t numw;
	char *temp;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
		return (0);

	numr = read(fd, temp, letters);
	if (numr == -1)
	{
		free(temp);
		close(fd);
		return (0);
	}

	numw = write(STDOUT_FILENO, temp, numr);
	if (numw == -1)
	{
		free(numw);
		close(fd);
		return (0);
	}

	close(fd);
	return (numr);

}
