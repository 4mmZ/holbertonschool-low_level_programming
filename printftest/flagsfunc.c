#include "main.h"

int print_str(va_list ap)
{
	char *str = va_arg(ap, char *);

	while(*str)
	{
		_putchar(*str);
		str = str + 1;
	}
	return (0);
}

int print_perc(va_list ap)
{
	int c = va_arg(ap, int);
	c = '%';

	return(_putchar(c));
}

int print_char(va_list ap)
{
	int c = va_arg(ap, int);

	write(1, &c, 1);
	return(0);
}


