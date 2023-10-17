#include "main.h"
/**
 * print_int - prints signed int
 * @ptr: points to variadic vars
 * @pc: ptr to buff
 * Return: returns number of chars printed
 */
int print_int(va_list *ptr, char **pc)
{
int i;
int n;
char *str;
n = va_arg(*ptr, int);
str = _atoi(n);
n = 0;
for (i = 0; i < _strlen(str); ++i)
{
putbuff(str[i], pc);
++n;
}
return (n);
}
