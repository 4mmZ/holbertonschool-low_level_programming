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
	int i;
	int sum = 0;
	int j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] <= 'z' && argv[i][j] >= 'a')
			{
				printf("Error\n");

				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
