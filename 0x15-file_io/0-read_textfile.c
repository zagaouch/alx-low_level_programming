#include <main.h>
/**
 * ssize_t read_textfile - function that reads a text file and prints it 
 * @filename: the path name of the file
 * @letters: the number of letters it should read and print
 * Return: number of letters , or 0 if NULL 
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_read;
	ssize_t num_written;
	int fd;
	char *temp;

	if (filename == NULL)
		return (0);

	fd = fopen(filename,O_RDONLY);

	if(fd == -1)
		return (0);
	*temp = malloc(sizeof(char) * (letters + 1));
	if (temp == NULL)
		return (0);
	num_read = read(fd, temp, letters);

	if (num_read == -1)
		 return (0);
	buffer[num_read] = '\0';
	num_written = write(STDOUT_FILENO, temp, num_read);
	if (num_written != num_read)
		return (0);
	close(fd);
	free(temp);
	return num_read;
}	
