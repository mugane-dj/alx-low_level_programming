#include <stdio.h>
#include <stdlib.h>

/**
* main - print result of multiplication.
*
* @argc: argument counter.
* @argv: pointer to integer array.
* Return: 0 on success.
*         1 on failure.
*/

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
