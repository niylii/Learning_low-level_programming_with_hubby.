#include "variadic_functions.h"

/**
 * chara - function that prints a character
 * @args : the charcter to be printed
 * Return: none
 */
void chara(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * inte - function that prints a integer
 * @args : the integer to be printed
 * Return: none
 */
void inte(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * floa - function that prints a float
 * @args : the float to be printed
 * Return: none
 */
void floa(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * stri - function that prints a string
 * @args : the string to be printed
 * Return: none
 */
void stri(va_list args)
{
	char *str = va_arg(args, char *);
	printf("%s", str ? str : "nil");
}

/**
 * print_all - a function that prints all the types
 * @format : list of arguments passed to the function
 * Return: none
 */
void print_all(const char * const format, ...)
{
	int j;
	const char *fmt = format;
	va_list args;
	format_type forme[] = {
		{"c", chara},
                {"i", inte},
                {"f", floa},
                {"s", stri},
	};
	va_start(args, format);

	while (fmt && *fmt)
	{
		j = 0;
		while (j < 4)
		{
			if (*fmt == *forme[j].type)
			{
				forme[j].f(args);
				if (*(fmt + 1))
					printf(", ");
				break;
			}
			j++;
		}
		fmt++;
	}
	printf("\n");
	va_end(args);
}
