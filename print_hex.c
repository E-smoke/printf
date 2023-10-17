#include "main.h"
/**
 * print_hexs - prints the hex value
 * @ptr: pointer to variadic vars
 * Return: number of chars printed
 */
int print_hexs(va_list *ptr)
{
unsigned int i;
unsigned int n;
unsigned int num;
char *str;
n = 0;
num = va_arg(*ptr, unsigned int);
str = int_hexs(num);
num = _strlen(str);
for (i = 0; i < num; ++i)
{
_putchar(str[i]);
++n;
}
return (n);
}
/**
 * print_hexc - prints the hex value
 * @ptr: pointer to variadic vars
 * Return: number of chars printed
 */
int print_hexc(va_list *ptr)
{
unsigned int i;
unsigned int n;
unsigned int num;
char *str;
n = 0;
num = va_arg(*ptr, unsigned int);
str = int_hexc(num);
num = _strlen(str);
for (i = 0; i < num; ++i)
{
_putchar(str[i]);
++n;
}
return (n);
}
