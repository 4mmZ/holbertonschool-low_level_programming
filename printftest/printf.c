#include "main.h"

/**
 *_printf - funcion que imita a la funcion definida por stdio.h printf
 *@format: los argumentos que le paso a la funcion
 */

int _printf(const char *format, ...)
{
	int (*f)(va_list ap);
	va_list ap;
	int i;
	int cont = 0;

	va_start(ap, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			f = printflags(&format[i]);
			if (f)
			{
				cont += f(ap);
			}
		}
		else
		{
			cont += _putchar(format[i]);
		}
	}
	va_end(ap);
	return (cont);
}
