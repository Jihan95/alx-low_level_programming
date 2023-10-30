#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: the text to be appended
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wBytes;

	if (!filename)
		return (-1);
	if (access(filename, W_OK) == 0)
	{
		fd = open(filename, O_WRONLY | O_APPEND, 0644);
		if (fd == -1)
			return (-1);
		if (text_content == NULL)
			return (1);
		wBytes = write(fd, text_content, strlen(text_content));
		if (wBytes == -1)
			return (-1);
		return (1);

	}
	else
		return (-1);
}
