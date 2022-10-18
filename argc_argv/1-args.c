#include <stdio.h>
#include <stdlib.h>
/**
 *main - the principal function
 *@argc: number of arguments
 *@argv: what argc contains
 *Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	if (argc)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
