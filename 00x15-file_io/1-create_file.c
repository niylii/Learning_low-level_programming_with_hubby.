#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL termenated stirng to write to the file
 * Return: 1 (success), -1 (failure) or the filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wt;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (fd);
	if (!text_content)
		wt = write(fd, text_content, sizeof(*text_content));
	if (wt == -1)
	{
		close(wt);
		return (wt);
	}
	close(fd);
	return (1);
}
