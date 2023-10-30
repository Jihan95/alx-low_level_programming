#include "main.h"
void _exit1(const char *filename);
void _exit2(const char *filename);

/**
 * main - copy a file to another file
 * @ac: number of passed argument
 * @av: vector of passed argument
 *
 * Return: 0 incase of success
 */

int main(int ac, char *av[])
{
	int fd_from, fd_to, flag;
	ssize_t wBytes, rBytes;
	char buffer[1024];

	if (ac != 3)
	{
		fprintf(stderr, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	if (access(av[1], R_OK) == 0)
	{
		fd_from = open(av[1], O_RDONLY);
		if (fd_from == -1)
			_exit1(av[1]);
		flag = access(av[2], F_OK) == 0;
		if (flag)
			fd_to = open(av[2], O_WRONLY);
		else
			fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
		if (fd_to == -1)
			_exit2(av[2]);
		while ((rBytes = read(fd_from, buffer, sizeof(buffer))) > 0)
		{
			wBytes = write(fd_to, buffer, rBytes);
			if (wBytes == -1)
				_exit2(av[2]); }
		if (rBytes == -1)
			_exit2(av[2]);
		if (close(fd_from) != 0)
		{
			fprintf(stderr, "Error: Can't close fd %d", fd_from);
			exit(100);
		}
		if (close(fd_to) != 0)
		{
			fprintf(stderr, "Error: Can't close fd %d", fd_to);
			exit(100);
		}
	}
	else
		_exit1(av[1]);
return (0); }

/**
 * _exit1 - termination in case of failure in file_from
 * @filename: the name file
 */

void _exit1(const char *filename)
{
	fprintf(stderr, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
 * _exit2 - termination in case of failure in file_to
 * @filename: the name file
 */

void _exit2(const char *filename)
{
	fprintf(stderr, "Error: Can't write to %s\n", filename);
	exit(99);
}
