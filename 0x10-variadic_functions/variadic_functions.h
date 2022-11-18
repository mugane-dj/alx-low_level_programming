#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
* struct print - type describing print.
*
* @symbol: symbol representing operation.
* @print: print function.
*/

typedef struct print
{
	char *symbol;
	void (*print)(va_list arg);
} printer;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list arg);
void print_float(va_list arg);
void print_int(va_list arg);
void print_string(va_list arg);

#endif
