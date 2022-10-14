#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the size of different data types in C
 * Return: 0
 */
int main(void)
{
	char charType;
	int integerType;
	float floatType;
	long int longIntType;
	long long int doubleLongIntType;

	printf("Size of a char: %lu byte(s)\n", sizeof(charType));
	printf("Size of an int: %lu byte(s)\n", sizeof(integerType));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(doubleLongIntType));
	printf("Size of a float: %lu byte(s)\n", sizeof(floatType));
	return (0);
}
