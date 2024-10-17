#include "main.h"

/**
 * slen - function that tells the lenght of a string
 * @str : the string
 * Return: the lenght of the string
 */

int slen(char *str)
{
	int i = 0;

	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

/**
 * argstostr - a function that concatenates all arguments of your program.
 * @ac: number of arguments
 * @av: the arguments
 * Return:  a pointer to a new string
 *		or NULL (fail or (ac == 0 or av == NULL))
 */

char *argstostr(int ac, char **av)
{
	char *str, *ori, **tmp;
	int ts = 0, i = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	tmp = av;
	for ( ; *tmp ; tmp++)
	{
		ts += slen(*tmp) + 1;
	}
	str = malloc(sizeof(char *) * (ts + 1));
	if (str == NULL)
		return (NULL);
	ori = str;
	while (i < ac)
	{
		while (*av[i])
			*str++ = *av[i]++;
		*str++ = '\n';
		i++;
	}
	*str = '\0';
	return (ori);
}
