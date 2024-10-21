#include "main.h"

/**
 * slen - function that returns the lenght of a string.
 * @s : the string
 * Return: the lenght of s.
 */

unsigned int slen(char *s)
{
	int l = 0;

	while (*s)
	{
		l++;
		s++;
	}
	return (l);
}

/**
 * string_nconcat -  function that concatenates two strings.
 * @s1 : string
 * @s2 : string
 * @n : first n bytes of s2
 * Return: point to a newly allocated space in memory contains s1
 *	followed by n bytes of s2.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ori, *str;
	unsigned int len;

	if (n > slen(s2))
		n = slen(s2);
	len = (slen(s1) + n);
	str = malloc(len + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	ori = str;
	while (*s1)
		*str++ = *s1++;
	while (*s2 && n--)
	{
		*str++ = *s2++;
	}
	*str = '\0';
	return (ori);
}
