#ifndef MAIN_INCLUDED
#define MAIN_INCLUDED

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>

int _putchar(char c);
int putbuff(char c, char **pc);
int print_buff(char *str);
int print_char(va_list *ptr, char **pc);
int print_percent(char **pc);
int print_str(va_list *ptr, char **pc);
int _printf(const char *format, ...);
int _strlen(char *str);
char *reverse(char *str);
void _memcpy(void *optr, void *nptr, size_t numtocpy);
void *_realloc(void *optr, size_t byte);
char *_atoi(int num);
int print_int(va_list *ptr, char **pc);
int print_ints(va_list *ptr, char **pc);
int print_intl(va_list *ptr, char **pc);
char *int_binary(unsigned int num);
int print_binary(va_list *ptr, char **pc);
int print_unsigned(va_list *ptr, char **pc);
char *int_octal(unsigned int num);
int print_octal(va_list *ptr, char **pc);
char *int_hexs(unsigned int num);
int print_hexs(va_list *ptr, char **pc);
char *int_hexc(unsigned int num);
int print_hexc(va_list *ptr, char **pc);
int nonprintable(va_list *ptr, char **pc);
char *int_hexsa(uintptr_t num);
int print_addy(va_list *ptr, char **pc);
int flag_plus(va_list *ptr, char **pc);
int flag_space(va_list *ptr, char **pc);
int flag_hashhexs(va_list *ptr, char **pc);
int flag_hashhexc(va_list *ptr, char **pc);
int flag_hashoct(va_list *ptr, char **p);
/**
 * struct spec - structure
 * @c: char
 * @funct_ptr: pointer to function
 */
typedef struct spec
{
char c;
int (*funct_ptr)(va_list *, char **);
} spec;

/**
 * struct spec1 - structure
 * @c0: char
 * @c1: char
 * @funct_ptr: pointer to function
 */
typedef struct spec1
{
char c0;
char c1;
int (*funct_ptr)(va_list *, char **);
} spec1;

#endif
