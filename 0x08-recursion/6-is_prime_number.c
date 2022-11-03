#include "main.h"

/**
* check_divisible - checks if number is divisible py provided iter.
*
* @n: number.
* @iter: divisor.
* Return: 0 if its divisible.
*          1 if not.
*/

int check_divisible(int n, int iter)
{
	if (n == iter)
		return (1);
	else if (n % iter == 0)
		return (0);
	else
		return (check_divisible(n, iter + 1));
}

/**
* is_prime_number - checks if an integer is a prime number.
*
* @n: number.
* Return: 1 if the integer is a primt number.
*         0 if otherwise.
*/

int is_prime_number(int n)
{
	int iter = 5;

	if (n < 4)
		return (0);
	else if (n == 4)
		return (1);
	else
		return (check_divisible(n, iter));
}
