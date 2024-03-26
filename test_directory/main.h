#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
typedef struct spe
{
        char spe;
        void (*f)(va_list list);
} spe_t;
int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(char *s);
void print_char(va_list list);
void print_string(va_list list);
void print_percentage(va_list list);
void print_decimal(va_list list);
void print_integer(va_list list);
#endif
