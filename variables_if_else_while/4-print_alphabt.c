#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 * Return: return 0
 */

int main(void)

{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	if (letter != 'q' && letter != 'e')
		putchar(letter);
	}
	putchar(10);
	return (0);
}

