#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 * Return: return 0
 */

int main(void)

{
	char ch;
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}

