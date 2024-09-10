#include "main.h"
/**
 * _strlen - function that returns the lenght of a string.
 * @s: string
 * Return: the lenght of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}


/**
 * print_rev - prints a string, in reverse
 * @s: string
 * Return: nothing
 */

void print_rev(char *s)
{
	int i;

	i = _strlen(s) - 1;
	while (s[i] && (i >= 0))
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
