#include "main.h"
/**
 * print_unsigned - prints unsigned int
 * @ptr: ptr to variadic functions
 * @pc: ptr to buff
 * Return: number of chars printed
 */
int print_unsigned(va_list *ptr, char **pc)
{
int i;
unsigned int n;
char *str;
n = va_arg(*ptr, unsigned int);
str = _atoi(n);
n = 0;
for (i = 0; i < _strlen(str); ++i)
{
putbuff(str[i], pc);
++n;
}
return (n);
}
