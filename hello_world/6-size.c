#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int intType;
	float floatType;
	long int doubleType;
	char charType;
	long long int tripleType;

	printf("Size of a char: %ld byte(s)\n", sizeof(charType));
	printf("Size of an int: %ld byte(s)\n", sizeof(intType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(doubleType));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(tripleType));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatType);
	return (0);
}
