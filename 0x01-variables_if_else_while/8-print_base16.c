#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Prints base 16 numbers in lowercase
 * Return: Always 0
 */
int main(void)
{
	char ch;
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	for (ch = 97; ch <= 102; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
