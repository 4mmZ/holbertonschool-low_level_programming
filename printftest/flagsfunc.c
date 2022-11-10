#include "main.h"
int val_n(va_list ap);
int print_int(int n);
/**
 *print_str - function that print a string
 *@ap: the arguments
 *Return: 0
 */
int print_str(va_list ap)
{
	char *str = va_arg(ap, char *);
	int i;

	if(str)
	{
		for (i = 0; *str; i++)
		{
			_putchar(*str);
			str = str + 1;
		}
	}
	else
	{
		return (write(1, "(null)", 6));
	}
	return (i);
}

/**
 *print_perc - function that print a percentage
 *@ap: the arguments
 *Return: 0
 */
int print_perc(__attribute__((unused))va_list ap)
{

	return (_putchar('%'));
}

/**
 *print_char - function that prints a single character
 *@ap: the arguments
 *Return: 0
 */
int print_char(va_list ap)
{
	int c = va_arg(ap, int);

	return(write(1, &c, 1));
}

/**
 *
 *
 *
 */
int print_int(int n)
{
	
	if (n < 0)
	{
	_putchar('-');
	n = n - 1;
	}
	if (n > 9) print_int(n/10);
	{
	_putchar('0' + (n%10));
	}
	return(0);

}

int val_n(va_list ap)
{
	int n = va_arg(ap, int);

	return(print_int(n));
}




