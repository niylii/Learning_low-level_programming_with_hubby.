#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name : the name to print
 * @f : a function pointer
 * Return: none
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL || name[0] == '\0')
		return;
	f(name);
}
