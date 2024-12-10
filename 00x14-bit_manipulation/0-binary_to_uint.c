#include "main.h"

/**
 * reversit - a function that reverses a string
 * @b : the string to revers
 * Return: the reversed string
 */

char *reversit(const char *b)
{
	char *bi = (char *)b;
	char tmp;
	int i = 0, j;

	while (bi[i])
		i++;
	j = i - 1;
	i = 0;
	while (i < j)
	{
		tmp = bi[j];
		bi[j] = bi[i];
		bi[i] = tmp;
		i++;
		j--;
	}
	return (bi);
}
/**
 * binary_to_uint - a function that converts a binary number to an u. int
 * @b : string points the number in binary
 * Return: converted number
 *		0 if there is one or more chars in the string b
 *		 that is not 0 or 1 or b is null
 *
 */

unsigned int binary_to_uint(const char *b)
{
	char bi[32];
	unsigned int num = 0, i = 0, mul = 1;
	char *reversed;

	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	for (i = 0; b[i] != '\0'; i++)
		bi[i] = b[i];
	bi[i] = '\0';
	reversed = reversit(bi);
	i = 0;
	while (reversed[i])
	{
		if (reversed[i] == '1')
			num += mul;
		mul *= 2;
		i++;
	}
	return (num);
}
