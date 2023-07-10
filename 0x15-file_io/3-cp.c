#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that copies the contents of afile to another file
 * @av: array of pointer to arguments
 * @ac: the number of arguments
 *
 * Return: 0 on sucess
 */
int main(int ac, char **av)
{
	int r, w, to, from;
	char *buff;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	from = open(av[1], O_RDONLY);
	r = read(from, buff, 1024);
	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			free(buff);
			exit(98);
		}
		w = write(to, buff, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			free(buff);
			exit(99);
		}
		r = read(from, buff, 1024);
		to = open(av[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buff);
	_close(from);
	_close(to);
	return (0);
}
/**
 * _close - function that close a file
 * @f: the file decriptor to be close
 */
void _close(int f)
{
	int C;

	C = close(f);
	if (C == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}
}
