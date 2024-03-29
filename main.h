#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct spe - structur that determine the conversion specifiers and
 * the corresponding function
 * @spe: is a conversion specifier
 * @f: is a function pointer that calls the corresponding function
 */
typedef struct spe
{
	char spe;
	int (*f)(va_list list);
} spe_t;

int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(char *s);
int print_char(va_list list);
int print_string(va_list list);
int print_percentage(va_list list);
int print_decimal(va_list list);
int print_integer(va_list list);
int get_sp_func(const char *format, va_list list);

#endif
