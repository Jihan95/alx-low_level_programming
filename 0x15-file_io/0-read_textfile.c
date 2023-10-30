#include "main.h"

/**
 * read_textfile - reads a text file and prints it to standard output.
 * @filename: file to be read
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nletters;
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = (char *)malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	nletters = read(fd, buffer, letters);
	if (nletters == -1)
		return (0);
	if (write(STDOUT_FILENO, buffer, nletters) == -1)
		return (0);
	free(buffer);
	close(fd);
	return (nletters);
}
