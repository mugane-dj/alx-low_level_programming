#include <stdio.h>

/**
* main - prints the name of a program.
*
* @argc: argument counter.
* @argv: pointer to array of strings.
* Return: 0 on success.
*/

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
