#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: file name
 * @text_content: content text
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int numw;


	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	FILE *file = fopen(filename, "a");

	if (file == NULL)
		return (-1);
	numw = fprintf(file, "%s", text_content);
	if (numw < 0)
	{
		fclose(file);
		return (-1);
	}
	fclose(file);
	return (1);
}
