#include "main.h"
/**
 * print_string - a function that prints a string.
 * Description: a function that prints a string.
 *
 */
int print_string(va_list list)
{
	
        int j;
        char *string = va_arg(list, char *);

        if (string == NULL)
        {
                _putchar('n');
		return (0);
        }
        for (j = 0; string[j] != '\0'; j++)
        {
                _putchar(string[j]);
        }
	return (_strlen(string));
	 

	/**
	char *str;
	int len, i;

	str = va_arg(list, char *);
	len = _strlen(str);

	for (i = 0; i < len; i++)
	{
		_putchar (str[i]);
	}
	return (0);
	*/
}
/**
 * print_char - a function that prints a character.
 * Description: a function that prints a character.
 *
 */
int print_char(va_list list)
{
        char c = va_arg(list, int);

	_putchar(c);
        return (0);
}
/**
 * print_percentage - a function that prints the percentage sign.
 * Description:
 *
 */
int print_percentage(va_list list __attribute__((unused)))
{
	_putchar('%');
	return (0);
}
/**
 * print_decimal - a function that prints a decimal
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
		count += 1;
	}
	for (; n > 9; n /= 10)
	{
		count++;
	}

	return (count);
}
