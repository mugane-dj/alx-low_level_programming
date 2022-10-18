#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints unique three-digit combinations
 * Return: Always 0
 */

int main(void)
{
	int n1 = 0, n2, n3;

	while (n1 < 8)
	{
		n2 = n1 + 1;
		while (n2 < 9)
		{
			n3 = n2 + 1;
			while (n3 < 10)
			{
				putchar((n1 % 10) + '0');
				putchar((n2 % 10) + '0');
				putchar((n3 % 10) + '0');
				n3++;

				if (n3 == 10 && n2 == 8 && n1 == 7)
					break;

				putchar(',');
				putchar(' ');
			}
			n2++;
		}
		n1++;
	}

	putchar('\n');

	return (0);
}
