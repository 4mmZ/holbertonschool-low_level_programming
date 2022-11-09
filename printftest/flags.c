#include "main.h"

/**
*printflags - the function that contains the printf flags
*@format: the string that printflags takes
*Return: 0
*/

int (*printflags(const char *format))(va_list)
{
	perc func[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_perc},
		{'\0', NULL}
	};
	int i, j;

	for (i = 0; format[i]; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (format[i] == func[j].c)
			{
				return (func[j].f);
			}
		}
	}
	return (0);
}
