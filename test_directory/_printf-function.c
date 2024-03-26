#include "main.h"
/**
 * print_string - a function that prints a string.
 * Description: a function that prints a string.
 *
 */
void print_string(va_list list)
{
        int j;
        char *string = va_arg(list, char *);
        if (string == NULL)
        {
                _putchar('n');
                return;
        }
        for (j = 0; string[j] != '\0'; j++)
        {
                _putchar(string[j]);
        }
}
/**
 * print_char - a function that prints a character.
 * Description: a function that prints a character.
 *
 */
void print_char(va_list list)
{
        char c = va_arg(list, int);
        _putchar(c);
}
/**
 * print_percentage - a function that prints the percentage sign.
 * Description:
 *
 */
void print_percentage(va_list list)
{
        _putchar('%');
}
