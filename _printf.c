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
	int len = 0;

	va_start(list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	len = get_sp_func(format, list);
	va_end(list);
	return (len);
}
