#include "main.h"

/**
 * main - entry point of the program
 * Return: 0 (success), 1 (failure)
 * This program copies the content of a file to another file.
 */

int main (int ac, char **av)
{
	int fd, FD_VALUE, bites;
	char *buff;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from %s\n", av[2]);
		exit(97);
	}
	buff = av[2];
	fd = open(buff, O_CREAT | O_RDWR | O_TRUNC && O_APPEND, 0664);
	bites = read(fd, av[2], 1024);
	if (!av[1] || bites == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
		
	}
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	FD_VALUE = close (fd);
	if (FD_VALUE == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", FD_VALUE);
		exit(100);
	}
	return (0);
}
