#include "main.h"
/**
 * print_octal - prints the octal value
 * @ptr: ptr to variadic var
 * @pc: ptr to buff
 * Return: the number of chars printed
 */
int print_octal(va_list *ptr, char **pc)
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
putbuff(str[i], pc);
++n;
}
return (n);
}
