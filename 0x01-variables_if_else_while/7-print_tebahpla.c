#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Prints the alphabet in lowercase
 * Return: 0 success
 */
int main(void)
{
	/* variable ch also works as the incrementing factor*/
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
