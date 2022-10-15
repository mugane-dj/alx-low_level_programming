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

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
