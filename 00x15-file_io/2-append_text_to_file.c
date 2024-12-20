#include <string.h>
#include "main.h"

/**
 * append_text_to_file - a function that appends a file at the end of an other
 * @filename: the file name
 * @text_content: the text content to add at the end of the other file
 * Return: 1 (success) or if the txt content is NULL, and -1 (failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wt;

	if (!filename)
		return (-1);
	fd = open(filename,  O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		close(-1);
		return (-1);
	}
	if (text_content)
		wt = write(fd, text_content, strlen(text_content));
	if (wt == -1)
	{
		close(-1);
		return (-1);
	}
	close(fd);
	return (1);
}
