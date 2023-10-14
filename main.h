#ifndef MAIN_INCLUDED
#define MAIN_INCLUDED

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int print_char(va_list *ptr);
int print_percent();
int print_str(va_list *ptr);
int _printf(const char *format, ...);

#endif
