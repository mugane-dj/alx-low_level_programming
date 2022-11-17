#include <stdlib.h>
#include "3-calc.h"

/**
* op_add - sums two ints.
*
* @a: first int member.
* @b: second int member.
* Return: sumation result.
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - subtracts two ints.
*
* @a: first int member.
* @b: second int member.
* Return: subtraction result.
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - multiplies two ints.
*
* @a: first int member.
* @b: second int member.
* Return: multiplication result.
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - divides two ints.
*
* @a: first int member.
* @b: second int member.
* Return: division result.
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - finds remainder.
*
* @a: first int member.
* @b: second int member.
* Return: remainder value.
*/

int op_mod(int a, int b)
{
	return (a % b);
}
