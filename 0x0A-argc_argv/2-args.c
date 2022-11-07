#include <stdio.h>

/**
* main - prints all arguments passed to a program.
*
* @argc: argument counter.
* @argv: pointer to array of strings.
* Return: 0 on success.
*/

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		int count;

		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}
