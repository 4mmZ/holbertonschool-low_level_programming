#include "main.h"

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
 *
int print_int(va_list ap);
{
	
	int entero = va_arg(ap, int);
	
	if (entero > 9)i|

	return(_putchar(entero));

}
*/




