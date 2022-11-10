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
	
	if (format)
	{
		for (i = 0; format[i]; i++)
		{
			if (format[i] == '%')
			{
				if (format[i + 1] != '\0')
				{
					i++;
					f = printflags(format[i]);
					if (f)
					{
						cont += f(ap);
					}
				}
				else
					return (-1);
			}
			else
			{
				cont += _putchar(format[i]);
			}
		}
	}
	else
		cont--;
	va_end(ap);
	return (cont);
}
