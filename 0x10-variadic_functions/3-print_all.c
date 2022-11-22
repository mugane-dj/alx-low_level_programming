#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_char - prints character to stdout.
*
* @arg: list of char pointers.
* Return: void.
*/

void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}

/**
* print_int - prints integers to stdout.
*
* @arg: list of int pointers
* Return: void.
*/

void print_int(va_list arg)
{
	int n;

	n = va_arg(arg, int);
	printf("%d", n);
}

/**
* print_float - prints floats to stdout.
*
* @arg: list of float pointers.
* Return: void.
*/

void print_float(va_list arg)
{
	float n;

	n = va_arg(arg, double);
	printf("%f", n);
}

/**
* print_string - prints a string to stdout.
*
* @arg: list of string pointers.
* Return: void.
*/

void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
* print_all - prints anything.
*
* @format: type of arguments passed.
* Return: void.
*/

void print_all(const char * const format, ...)
{

	va_list params;
	int x = 0, y = 0;
	char *s = "";

	printer ops[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(params, format);

	while (format && (*(format + x)))
	{
		y = 0;

		while (y < 4 && (*(format + x) != ops[y]->symbol))
			y++;

		if (y < 4)
		{
			printf("%s", s);
			ops[y].print(params);
			s = ", ";
		}

		x++;
	}

	printf("\n");

	va_end(params);
}
