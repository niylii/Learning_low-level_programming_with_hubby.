#include "main.h"

/**
* leet -  function that encodes a string into 1337.
* @str : string
* Return: a string
*/

char *leet(char *str)
{
	char *org = str;
	char nbr[] = "43071", alpha[] = "AEOTL";
	int i, j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (alpha[j])
		{
			if (str[i] == alpha[j] || str[i] == alpha[j] + 32)
				str[i] = nbr[j];
			j++;

		}
		i++;
	}
	return (org);
}
