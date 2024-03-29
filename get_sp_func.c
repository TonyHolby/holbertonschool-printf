#include "main.h"

/**
 * get_sp_func - selects the corresponding function
 *
 * @format: specifier string
 * @list: list
 *
 * Return: len
 */

int get_sp_func(const char *format, va_list list)
{
	int i, j = 0, len = 0;
	spe_t sps[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percentage},
		{'d', print_decimal},
		{'i', print_decimal},
		{'\0', NULL}};

	while (format != NULL && format[j] != '\0')
	{
		if (format[j] == '%' && (format[j + 1] != 'K' && format[j + 1] != '!'))
		{
			j++;
			i = 0;
			while (sps[i].spe != '\0')
			{
				if (sps[i].spe == format[j])
				{
					len += sps[i].f(list);
				}
				i++;
			}
		}
		else
		{
			_putchar(format[j]);
			len++;
		}
		j++;
	}
	return (len);
}
