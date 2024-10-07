#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program.
 * @argc : the argument count.
 * @argv : the arguments.
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i = 1, mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		while (i < 3)
		{
			mul = mul * atoi(argv[i]);
			i++;
		}
	}
	printf("%d\n", mul);
	return (0);
}
