#include "variadic_functions.h"

/**
 * sum_them_all -  function that returns the sum of all its parameters.
 * @n : number of arguments
 * @... : the numbers to be summed
 * Return: sum of all the parameters
 *	If n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}

