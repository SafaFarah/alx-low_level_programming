#include "main.h"

/**
 * create_file - function creats afile.
 * @filename: The name of the file to create.
 * @text_content: NULL terminated  a string to write to the file.
 *
 * Return: 1 on success , -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fo;
	int len = 0;
	int w;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fo = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fo, text_content, len);

	if (fo == -1 || w == -1)
		return (-1);

	close(fo);

	return (1);
}
