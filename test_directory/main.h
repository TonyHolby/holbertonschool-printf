#ifndef MAIN
#define MAIN

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct spe_t;

{
	char *spe;
	int (*f)(va_list list);
} spe_t;

int _putchar(char c);
int _printf(const char *format, ...);

#endif
