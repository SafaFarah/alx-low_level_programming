#include "main.h"
/**
* append_text_to_file - function appends text at the end of a file.
* @filename: The name of the file.
* @text_content: NULL terminated string to add to the end of the file.
*
* Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fo;
	int w;
	int len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fo = open(filename, O_WRONLY | O_APPEND);
	w = write(fo, text_content, len);
	if (fo == -1 || w == -1)
		return (-1);
	close(fo);
	return (1);
}
