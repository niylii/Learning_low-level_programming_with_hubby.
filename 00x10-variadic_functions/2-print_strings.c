#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings -  function that prints strings
 * @separator : is the string to be printed between numbers
 * @n : the number of integers passed to the function
 * Reurn: none
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	va_start(args, n);
	
	while (i < n)
	{
		char *str =  va_arg(args, char *);
		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);
		if (i < n - 1 && (separator != NULL))
			printf("%s",  separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
