#ifndef MAIN_INCLUDED
#define MAIN_INCLUDED

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int print_char(va_list *ptr);
int print_percent(void);
int print_str(va_list *ptr);
int _printf(const char *format, ...);
int _strlen(char *str);
char *reverse(char *str);
void _memcpy(void *optr, void *nptr, size_t numtocpy);
void *_realloc(void *optr, size_t byte);
char *_atoi(int num);
int print_int(va_list *ptr);
char *int_binary(unsigned int num);
int print_binary(va_list *ptr);
int print_unsigned(va_list *ptr);
char *int_octal(unsigned int num);
int print_octal(va_list *ptr);
char *int_hexs(unsigned int num);
int print_hexs(va_list *ptr);
/**
 * struct spec - structure
 * @c: char
 * @funct_ptr: pointer to function
 */
typedef struct spec
{
char c;
int (*funct_ptr)(va_list *);
} spec;

#endif
