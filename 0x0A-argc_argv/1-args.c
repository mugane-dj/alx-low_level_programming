#include <stdio.h>

/**
* main - prints the number of arguments passed to a program.
*
* @argc: argument counter.
* @argv: pointer to array of strings.
* Return: 0 on success.
*/

int main(int argc, char *argv[]__attribute__((unused)))
{
	if (argc > 0)
	{
		/*Do not count argv[0]*/

		printf("%d\n", argc - 1);
	}
	return (0);
}
