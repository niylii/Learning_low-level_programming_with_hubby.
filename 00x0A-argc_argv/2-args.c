#include <stdio.h>

/**
 * main - entry point of the program.
 * @argc : the argument count.
 * @argv : the arguments.
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
