#include "main.h"
/**
 * _printf - print all
 *
 * @format: is a character string.
 *
 * return: always 0.
 */

int _printf(const char *format, ...)
{
        va_list list;
        int i, j;
        spe_t sps[] = {
                {'c', print_char},
                {'s', print_string},
                {'%', print_percentage},
		{'d', print_decimal},
		{'i', print_integer},
		{'\0', NULL}};
	va_start(list, format);
	j = 0;
	while (format != NULL && format[j] != '\0')
	{
		if (format[j] == '%')
		{
			j++;
			i = 0;
			while (sps[i].spe != '\0')
			{
				if (sps[i].spe == format[j])
				{
					sps[i].f(list);
				}
				i++;
			}
		}
		else 
		{
			_putchar(format[j]);
		}
		j++;
	}
	va_end(list);
	return (0);
}
