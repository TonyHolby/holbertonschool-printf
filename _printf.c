#include "main.h"

/**
 * _printf - print all
 *
 * @format: is a character string.
 *
 * Return: the number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list list;
	int i, j, num_of_char = 0;
	spe_t sps[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percentage},
		{'\0', NULL}};

	va_start(list, format);
	j = 0;
	if (format == NULL || format[j + 1] == '\0')
	{
		return (-1);
	}
	while (format != NULL && format[j] != '\0')
	{
		if (format[j] == '%' && (format[j] != 'K' || format[j] != '!'))
		{
			j++;
			i = 0;
			while (sps[i].spe != '\0')
			{
				if (sps[i].spe == format[j])
				{
					num_of_char += sps[i].f(list);
				}
				i++;
			}
		}
		else
		{
			_putchar(format[j]);
			num_of_char++;
		}
		j++;
	}
	va_end(list);
	return (num_of_char);
}
