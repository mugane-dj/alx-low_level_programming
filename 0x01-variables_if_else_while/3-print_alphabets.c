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
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
