#include "main.h"

/**
 * print_char - a function that prints a character.
 * Description: a function that prints a character.
 *
 */

void print_char(va_list list)
{
	_putchar(va_arg(list, int));
	_putchar('\n');
}

/**
 * print_string - a function that prints a string.
 * Description: a function that prints a string.
 *
 */

void print_string(va_list list)
{
	int i, j, length_string = 0;
	char *string = va_arg(list, char *);

	if (string == NULL)
	{
		_putchar("(nil)");
		return;
	}
	for (i = 0; i != '\0'; i++)
	{
		length_string++;
	}
	for (j = 0; j < (length_string - 1); j++)
	{
		_putchar(string[j])
	}
        _putchar('\n');
}

/**
 * print_percentage - a function that prints the percentage sign.
 * Description:
 *
 */

void print_percentage(va_list list)
{
        _putchar(va_arg(list, int));
        _putchar('\n');
}

/**
 * print_decimal - a function that prints a decimal (base 10) number.
 * Description:
 *
 */

void print_decimal(va_list list)
{
        _putchar(va_arg(list, int));
        _putchar('\n');
}

/**
 * print_integer - a function that prints an integer in base 10.
 * Description:
 *
 */

void print_integer(va_list list)
{
        _putchar(va_arg(list, int));
        _putchar('\n');
}
