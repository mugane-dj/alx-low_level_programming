#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Prints the alphabet in lowercase
 * Return: 0 success
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
