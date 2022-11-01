#include "3-calc.h"

/**
 *main - he creado una gat damm calculator
 *@argc: la cantidad de argumentos
 *@argv: el contenido de dichos argumentos
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int num2;
	int (*f)(int a, int b);

	num2  = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f  = get_op_func(argv[2]);
	if ((*argv[2] == '/' && num2 == 0) || (*argv[2] == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
