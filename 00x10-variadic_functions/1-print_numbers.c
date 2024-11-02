#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers -  function that prints numbers
 * @separator : is the string to be printed between numbers
 * @n : the number of integers passed to the function
 * Reurn: none
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);
	while (i < n)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1 && (separator != NULL))
			printf("%s",  separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
