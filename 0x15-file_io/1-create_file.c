#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - a function that creates a file.
 * @filename: file name
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int pf;
	int w;
	int i;
	int len;

	if (filename == NULL)
		return (-1);
	pf = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (pf == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			i++;
			len++;
		}
	}
	w = write(filename, text_content, len);
	if (w < 0)
		return (-1);
	close(pf);
	return (1);
}
