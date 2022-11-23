#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - printd formatted strings to console.
 *
 * @format: formatted string.
 * Return: number of chars printed exculding the null byte.
 */

int _printf(const char *format, ...)
{
	va_list params;
	int i = 0, j = 0;
	char *str;

	/* Initializing the buffer to all zeros.*/
	char buffer[100] = {0};
	char tmp[20] = {0};

	va_start(params, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					{
						buffer[j] = (char)va_arg(params, int);
						j++;
						break;
					}
				case 's':
					{
						str = va_arg(params, char *);
						_strcpy(&buffer[j], str);
						j += _strlen(str);
						break;
					}
				case 'd':
					{
						_itoa(va_arg(params, int), tmp, 10);
						_strcpy(&buffer[j], tmp);
						j += _strlen(tmp);
						break;
					}

			}
		}
		else
		{
			buffer[j] = format[i];
			j++;
		}
		i++;
	}
	write(1, buffer, j);
	va_end(params);

	return (j);
}
