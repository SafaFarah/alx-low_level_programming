#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void close_file(int fd);


/**
 * main - a program that copies the content of a file to another file.
 * @ac: The number of arguments  pass to the program.
 * @av: pointers to the arguments array.
 *
 * Return: 0.
 */
int main(int ac, char *av[])
{
	int from;
	int to;
	int r;
	int w;
	char *buf;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	from = open(av[1], O_RDONLY);
	r = read(from, buf, 1024);
	to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", av[1]);
			free(buf);
			exit(98);
		}
		w = write(to, buf, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", av[2]);
			free(buf);
			exit(99);
		}
		r = read(from, buf, 1024);
		to = open(av[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buf);
	close_file(from);
	close_file(to);
	return (0);
}

/**
 * close_file - closes file.
 * @fd: The file descriptor need close it.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}



