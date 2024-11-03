#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

typedef struct {
	char *type;
	void (*f)(va_list args);
} format_type;

void chara(va_list args);
void inte(va_list args);
void floa(va_list args);
void stri(va_list args);

#endif
