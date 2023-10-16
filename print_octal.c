#include "main.h"
/**
 * print_octal - prints the octal value
 * @ptr: ptr to variadic var
 * Return: the number of chars printed
 */
int print_octal(va_list *ptr)
{
unsigned int i;
unsigned int n;
unsigned int num;
char *str;
n = 0;
num = va_arg(*ptr, unsigned int);
str = int_octal(num);
num = _strlen(str);
for (i = 0; i < num; ++i)
{
_putchar(str[i]);
++n;
}
return (n);
}
