#include "main.h"

/**
 * usage_error - function that checks the number of the arguments
 * @i : number of arguments inseted
 */

void usage_error(int i)
{
	if (i != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * error98 - function that handls the read error
 * @i: The return value from a read operation.
 * @av: The name of the file being read.
 */
void error98(ssize_t i, const char *av)
{
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av);
		exit(98);
	}
}

/**
 * error99 - function that handls the write error
 * @i: The return value from a write operation.
 * @j: The file descriptor to close if an error occurs.
 * @av: The name of the file being written to.
 */
void error99(ssize_t i, ssize_t j, const char *av)
{
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av);
		if (j != -1)
			close(j);
		exit(99);
	}
}
/**
 * error100 - function that handls the closing error
 * @i: The return value from the closing 1st file operation.
 * @j: The return value from the closing 2nd file operation.
 */
void error100(ssize_t i, ssize_t j)
{
	if (i == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", i);
	if (j == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", j);
	exit(100);
}
/**
 * main - entry point of the program
 * @ac: the number of arguments
 * @av: the arguments
 * Return: 0 (success), 1 (failure)
 * This program copies the content of a file to another file.
 */

int main(int ac, char **av)
{
	ssize_t fd_to, fd_from, bites, wt;
	ssize_t cl_f, cl_t;
	char buff2[1024];

	usage_error(ac);
	fd_from = open(av[1], O_RDONLY);
	error98(fd_from, av[1]);

	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	error99(fd_to, fd_from, av[2]);

	bites = read(fd_from, buff2, 1024);
	while (bites > 0)
	{
		wt = write(fd_to, buff2, 1014);
		error99(wt, fd_from, av[2]);
	}
	error98(bites, av[1]);

	cl_f = close(fd_from);
	cl_t = close(fd_to);
	error100(cl_f, cl_t);
	return (0);
}
