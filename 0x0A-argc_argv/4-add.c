#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
* is_number - checks if a character is a number or symbol.
*
* @argv: pointer to character.
* Return: boolean true if character is a number.
*         boolean false is its not.
*/

bool is_number(char *argvv)
{
	int index;

	for (index = 0; argvv[index]; index++)
	{
		if (argvv[index] >= '0' && argvv[index] <= '9')
			return (1);
	}

	return (0);
}
/**
* main - print sum of arguments.
*
* @argc: argument counter.
* @argv: pointer to integer array.
* Return: 0 on success.
*         1 on failure.
*/

int main(int argc, char *argv[])
{
	int index;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (index = 1; index < argc; index++)
	{
		if (is_number(argv[index]))
		{
			sum = sum + atoi(argv[index]);
		}

		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}
