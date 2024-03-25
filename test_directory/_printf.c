#include "main.h"

/**
 * _printf - print all 
 *
 * @format: is a character string.
 *
 * return: ..
 */

int _printf(const char *format, ...)
{
va_list list;

sp_t sps[] = {
	{"c", print_char},
	{"s", print_string},
	{"%", print_percentage},
	{"d", print_decimal},
	{"i", print_integer},
	{NULL, NULL}
},
