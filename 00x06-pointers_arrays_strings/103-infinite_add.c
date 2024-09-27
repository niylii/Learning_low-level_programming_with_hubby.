#include "main.h"

/**
* len - function that tells the length of a string
* @s : string
* Return: the lenght of the string.
*/

int len(char *s)
{
	int i = 0;

	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}

/**
* infinite_add - function that adds two numbers.
* @n1 : a number.
* @n2 :a number.
* @r :  the buffer that the function will use to store the result
* @size_r : buffer size
* Return: a pointer to the result
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = len(n1);
	int len2 = len(n2);
	int overf = 0, sum, i;
	int pos1 = len1 - 1;
	int pos2 = len2 - 1;

	if (len1 + 1 > size_r || len2 + 1 > size_r)
		return (0);
	i = size_r - 1;
	r[i] = '\0';
	i--;

	while (i >= 0 && (pos1 >= 0 || pos2 >= 0 || overf))
	{
		sum = overf;
		if (pos1 >= 0)
			sum += n1[pos1--] - '0';
		if (pos2 >= 0)
			sum += n2[pos2--] - '0';
		overf = sum / 10;
		r[i] = sum % 10 + '0';
		i--;
	}
	if (overf && i < 0)
		return (0);
	return (r + i + 1);
}
