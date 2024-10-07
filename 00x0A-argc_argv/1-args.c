#include <stdio.h>

/**
 * main - entry point of the program.
 * @argc : argument count.
 * @argv : arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void)**argv;

	printf("%d\n", argc - 1);
	return (0);
}
