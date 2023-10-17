#include "main.h"
/**
 * print_binary - prints binary digits
 * @ptr: pointer to variadic vars
 * @pc: ptr to buffer
 * Return: the number of chars printed
 */
int print_binary(va_list *ptr, char **pc)
{
unsigned int i;
unsigned int n;
unsigned int num;
char *str;
n = 0;
num = va_arg(*ptr, unsigned int);
str = int_binary(num);
num = _strlen(str);
for (i = 0; i < num; ++i)
{
putbuff(str[i], pc);
++n;
}
return (n);
}
