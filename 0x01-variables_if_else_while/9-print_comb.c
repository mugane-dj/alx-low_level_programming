#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 * Return: Always 0
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar((num % 10) + '0');
		num++;
		if (num == 10)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
