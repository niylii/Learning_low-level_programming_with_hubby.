#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 * @argc : the count of arguments.
 * @argv : the arguments.
 * Return: 0 (success).
 */

int main(int argc, char *argv[])
{
	int i = 0, cents = 0;
	int change;
	int coins[] = {25 ,10 ,5 , 2, 1};
	
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	if (change < 0)
	{
		printf("0\n");
		return (0);
	}
	while(i < 5)
	{
		cents += change / coins[i];
		change %= coins[i];
		i++;
	}
	printf("%d\n", cents);
	return (0);
}
