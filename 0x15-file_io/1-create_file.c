#include <string.h>
#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: file name
 * @text_content: text content
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int n_wrote;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	n_wrote = write(fd, text_content, strlen(text_content));
	if (n_wrote == -1 || n_wrote != strlen(text_content))
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
