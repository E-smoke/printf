#include "main.h"
/**
 * flag_plus - puts plus in front of a positive int
 * @ptr: ptr to variadic funct
 * @pc: ptr
 * Return: the number of chars printed to buff
 */
int flag_plus(va_list *ptr, char **pc)
{
int i, num;
int n;
char *str;
num = va_arg(*ptr, int);
n = 0;
if (num > 0)
{
putbuff('+', pc);
++n;
}
str = _atoi(num);
for (i = 0; i < _strlen(str); ++i)
{
putbuff(str[i], pc);
++n;
}
return (n);
}
/**
 * flag_space - mimics space flag
 * @ptr: ptr to variadic funct
 * @pc: ptr
 * Return: the number of chars printed to buff
 */
int flag_space(va_list *ptr, char **pc)
{
int i, num, n;
char *str;
num = va_arg(*ptr, int);
n = 0;
if (num >= 0)
{
putbuff(' ', pc);
++n;
}
str = _atoi(num);
for (i = 0; i < _strlen(str); ++i)
{
putbuff(str[i], pc);
++n;
}
return (n);
}
/**
 * flag_hashhex - puts 0x in front
 * @ptr: ptr to variadic funct
 * @pc: ptr
 * Return: the number of chars printed to buff
 */
int flag_hashhex(va_list *ptr, char **pc)
{
int i;
unsigned int num, n;
char *str;
n = 0;
num = va_arg(*ptr, unsigned int);
str = int_hexs(num);
putbuff('0', pc);
putbuff('x', pc);
n += 2;
for (i = 0; i < _strlen(str); ++i)
{
putbuff(str[i], pc);
++n;
}
return (n);
}
/**
 * flag_hashoct - puts 0 in front
 * @ptr: ptr to variadic funct
 * @pc: ptr
 * Return: the number of chars printed to buff
 */
int flag_hashoct(va_list *ptr, char **pc)
{
int i;
unsigned int num, n;
char *str;
n = 0;
num = va_arg(*ptr, unsigned int);
str = int_octal(num);
putbuff('0', pc);
++n;
for (i = 0; i < _strlen(str); ++i)
{
putbuff(str[i], pc);
++n;
}
return (n);
}
