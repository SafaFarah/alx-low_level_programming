#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 * @filename: file name
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print or 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t pf;
	ssize_t r;
	ssize_t w;
	char *buf;

	if (filename == NULL)
		return (0);
	pf = fopen("filename", "r");
	if (pf == -1)
		return (0);
	buf = (char *)malloc(letters * sizeof(char));
	r = read(fp, buf, letters);
	w = write(STDOUT_FILENO, buf, r);
	if (w < 0)
		return (0);
	fclose(filename);
	free(buf);
	return (w);
}
