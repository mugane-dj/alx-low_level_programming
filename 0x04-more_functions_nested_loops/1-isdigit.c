#include "main.h"

/**
*_isupper - checks if integer is a digit between 0 and 9
*@c: integer to be checked
*
*Return: 1 if c is a digit between 0 and 9, 0 if otherwise
*/

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
