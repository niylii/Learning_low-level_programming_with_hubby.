#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point of the program.
 * @argc : the argument count.
 * @argv : the arguments.
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i = 1, add = 0;

	if (argc < 1)
		printf("%d\n", argc);
	while (argc > i)
	{
		if (strspn(argv[i], "0123456789") != strlen(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		add += atoi(argv[i]);
		i++;
	}
	printf("%d\n", add);
	return (0);
}
