#include "main.h"
int border_case(__attribute__((unused))va_list ap);
/**
*printflags - the function that contains the printf flags
*@format: the string that printflags takes
*Return: 0
*/

int (*printflags(const char format))(va_list)
{
	perc func[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_perc},
		{'i', val_n},
		{'d', val_n},
		{'\0', NULL}
	};
	int j;

	if (format)
	{
		for (j = 0; j < 7; j++)
		{
			if (format == func[j].c)
			{
				return (func[j].f);
			}
		}
		_putchar('%');
		_putchar(format);
		return (border_case);
	}
	else
		return (NULL);
	return (0);
}
/**
 *border_case - function thsat return 2
 *@ap: the arguments
 *Return: 2
 */
int border_case(__attribute__((unused))va_list ap)
{
	return (2);
}
