#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
  * create_file -  a function that creates a file.
  * @filename: file name.
  * @text_content: string to write to the file
  *
  * Return: 1 on success, -1 on failure 
  */
int create_file(const char *filename, char *text_content)
{
	int cf;
	int len = 0;

	if (text_content == NULL)
		len = 0;
	if (filename == NULL)
		return (-1);
	while (text_content[len] != '\0')

	{
		len++;
	}
	cf = open(filename, O_RDWR | O_CREAT, 0600 | O_TRUNC);
	if (cf == -1)
		return (-1);

