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
	int p;
	int q;

	if (argc < 3)
	{
		printf("Error\n");
	}
	else
	{
		p = atoi(argv[1]);
		q = atoi(argv[2]);

		printf("%d\n", p * q);
	}

	return (0);
}
