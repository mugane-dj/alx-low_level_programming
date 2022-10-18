#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints unique two-digit combinations
 * Return: Always 0
 */

int main(void)
{
	int n1 = 0, n2;

	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			putchar((n1 / 10) + '0');
			putchar((n1 % 10) + '0');
			putchar(' ');
			putchar((n2 / 10) + '0');
			putchar((n2 % 10) + '0');
			n2++;

			if (n2 == 99 && n1 == 98)
				continue;

			putchar(',');
			putchar(' ');
		}
		n1++;
	}

	putchar('\n');

	return (0);
}
