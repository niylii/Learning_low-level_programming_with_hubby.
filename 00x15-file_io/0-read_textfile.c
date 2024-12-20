#include "main.h"

/**
 * read_textfile - a function that reads a text file
 *	and prints it into the POSIX stdout
 * @filename: the file name
 * @letters: the number of letters
 * Return: the actual number of letters it could read and print
 *	 0 if the file cannot be opened or the file name is NULL
 *	 or write fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bites;
	char *buff;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(letters);
	if (!buff)
	{
		close(fd);
		return (0);
	}
	bites = read(fd, buff, letters);
	if (bites == -1)
		return (0);
	write(STDOUT_FILENO, buff, bites);
	buff[bites] = '\0';
	free(buff);
	close(fd);
	return (bites);
}
