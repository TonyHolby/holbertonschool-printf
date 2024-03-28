#include "main.h"

/**
 * print_string - a function that prints a string.
 * @list: a list
 * Return: the number of characters printed
 */
int print_string(va_list list)
{
	char *str;
	int len, i;

	str = va_arg(list, char *);
	len = _strlen(str);

	if (str == NULL)
	{
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');

		return(len);
	}

	for (i = 0; i < len; i++)
	{
		_putchar (str[i]);
	}
	return (len);
}

/**
 * print_char - a function that prints a character.
 * @list: a list
 * Return: the number of characters printed
 */
int print_char(va_list list)
{
	int len = 1;
	char c = va_arg(list, int);

	_putchar(c);
	return (len);
}

/**
 * print_percentage - a function that prints the percentage symbol.
 * @list: a list
 * Return: the number of characters printed
 */
int print_percentage(va_list list __attribute__((unused)))
{
	int len = 1;

	_putchar('%');
	return (len);
}

/**
 * print_decimal - a function that prints a decimal
 * @list: a list
 * Return: the number of characters printed
 */
int print_decimal(va_list list)
{
	int count = 1, m = 0;
	unsigned int n = 0;

	n = va_arg(list, int);
	m = n;
	if (m < 0)
	{
		_putchar('-');
		m = m * -1;
		n = m;
		count ++;
	}

	for (; n > 9; n /= 10)
        {
                count++;
        }

        return (count);
}
