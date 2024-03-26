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
        }
        for (j = 0; string[j] != '\0'; j++)
        {
                _putchar(string[j]);
        }
	return (0);
	 

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
        return(c);
	
}
/**
 * print_percentage - a function that prints the percentage sign.
 * Description:
 *
 */
int print_percentage(va_list list)
{
	char *str = "%";

	if (va_arg(list, int) == *str)
	{
		return (*str);
	}
	return (*str);
}
