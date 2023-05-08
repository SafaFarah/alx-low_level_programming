#include <sys/types.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
  * read_textfile - a function that reads a text file and prints it
  * @filename: file name
  * @letters: number of letters it should read and print
  *
  * Return: actual number of letters it could read and print or 0
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t of;
	ssize_t r;
	ssize_t p;
	char *buff;

	of = open(filename, O_RDONLY);
	if (of == -1)
		return (0);
	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	r = read(of, buff, letters);
	p = write(STDOUT_FILENO, buff, r);
	if (p == -1)
		return (0);
	free(buff);
	close(of);
	return (p);
}
