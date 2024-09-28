#include "main.h"
#include <stddef.h>
/**
* _strstr - a function that  function that searches a string for
*	any of a set of bytes.
* @haystack : a string
* @needle : a substring
* Retrun:  function that searches a string for any of a set of bytes.
*/

char *_strstr(char *haystack, char *needle)
{
	char *n, *h;

	if (*needle == '\0')
		return (haystack);
	while (*haystack)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*n == *h)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
