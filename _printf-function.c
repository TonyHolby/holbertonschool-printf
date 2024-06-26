#include "main.h"

/**
 * print_string - a function that prints a string.
 * @list: a list
 * Return: the number of characters printed
 */
int print_string(va_list list)
{
	char *str;
	int len = 0, i;

	str = va_arg(list, char *);

	if (str == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		len = 6;

		return (len);
	}
	else
	{

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar (str[i]);
		len++;
	}
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
 * _recur_int - prints integer
 * @a: integer to print
 *
 * Return: ..
 */
void _recur_int(int a)
{
	unsigned int b;

	b = a;
	if (b / 10)
	{
		_recur_int(b / 10);
	}
	_putchar(b % 10 + '0');
}

/**
 * print_decimal - a function that prints a decimal
 * @list: a list
 * Return: the number of characters printed
 */
int print_decimal(va_list list)
{
	int len = 1, nCopy = 0;
	unsigned int n;

	n = va_arg(list, int);
	nCopy = n;
	if (nCopy < 0)
	{
		_putchar('-');
		nCopy = nCopy * -1;
		n = nCopy;
		len++;
	}

	for (; n > 9; n /= 10)
	{
		len++;
	}

	_recur_int(nCopy);
	return (len);
}
