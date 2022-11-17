#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
* main - calls operations based on params provided.
*
* @argc: number of arguments passed.
* @argv: array of pointers to arguments passed.
* Return: Always 0.
*/

int main(int __attribute__((__unused__))argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((num1 == 0 || num2 == 0) &&
	   (*op == '/' || *op == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
