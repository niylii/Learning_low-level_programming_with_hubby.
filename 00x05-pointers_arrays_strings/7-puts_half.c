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
 * puts_half -  function that prints half of a string.
 * @str: string
 * Return: nothing
 */

void puts_half(char *str)
{
	int n, i;

	int len = _strlen(str);
	if (len % 2 != 0)
	{
		n = ((len - 1) / 2) + 1;
	}
	else
	{
		n = len / 2;
	}
	i = n;
	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
