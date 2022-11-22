#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
* match_specifier - A function pointer that matches
*                   the provided specifier with its
*                   corresponding conversion function.
* @specifier: A pointer to the provided specifier.
*
* Return: A pointer to the conversion function if match
*         is successful. Else NULL.
*/

unsigned int (*match_specifier(const char *specifier))(va_list)
{
	int index;

	converter ops[] = {
		{"c", convert_c},
		{"s", convert_s},
		{"%", convert_percent},
		{0, NULL}
	};

	for (index = 0; ops[i].func; i++)
	{
		if (ops[i].specifier == *specifier)
			return (ops[i].func);
	}

	return (NULL);
}
