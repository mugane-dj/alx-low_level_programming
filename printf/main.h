#ifndef _MAIN_H
#define _MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
* struct converter_struct - A new type defining a converter structure.
* @specifier: character representing a format specifier i.e %, c.
* @func: A function pointer pointing to converter function.
*/

typedef struct converter_struct
{
	unsigned char specifier;
	unsigned int (*func)(va_list);
} converter;

int _printf(const char *format, ...);
unsigned int (*match_specifier(const char *specifier))(va_list);

#endif
