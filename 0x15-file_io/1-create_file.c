#include <string.h>
#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: file name
 * @text_content: text content
 * Returns: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, numw, text_size = 0;

	if (filename == NULL)
		return (-1);
	while (text_content != NULL)
		text_size = strlen(text_content);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (0);
	if (text_size > 0)
	{
		numw = write(fd, text_content, text_size);
		if (numw == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
