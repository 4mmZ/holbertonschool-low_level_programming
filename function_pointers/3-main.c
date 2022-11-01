#include "3-calc.h"

/**
 *main - he creado una gat damm calculator
 *@argc: la cantidad de argumentos
 *@argv: el contenido de dichos argumentos
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;

	if (argc)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		if (argc > 4)
		{
			printf("Error\n");
			exit(98);

		}
		if ((*argv[2] == '/' && num2 == '0') || (*argv[2] == '%' && num2 == '0'))
		{
			printf("Error\n");
			exit(100);
		}

		printf("%d\n", get_op_func(argv[2])(num1, num2));

	}
	return (0);

}
