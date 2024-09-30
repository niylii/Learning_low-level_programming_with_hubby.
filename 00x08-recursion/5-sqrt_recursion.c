#include "main.h"

/**
* square - function that finds the square root
* @n : the number
* @nb : the square
* Return: the square root
*/
int square(int n, int nb)
{
	if (nb * nb > n)
		return (-1);
	else if (nb * nb == n)
		return (nb);
	else
		return (square(n, nb + 1));
}

/**
*  _sqrt_recursion - function that returns the natural square root of a number.
* @n : the number
* Return: the natural square root of a number.
*/

int  _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
		return (1);
	return (square(n, 1));
}
