#include <stdio.h>
#include <stdlib.h>

/**
 *main - the function
 *@argc: argc
 *@argv: argv
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int a;
	int i;
	int sum = 0;

	if (argc < 3)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		sum = sum + atoi(argv[i]);
	}
	for (a = 0; a < 256; a++)
	{
		if (a < 48 && a > 57)
		{
			printf("Error\n");
		}
	}

	printf("%d\n", sum);

	return (0);
}
