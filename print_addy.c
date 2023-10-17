#include "main.h"
/**
 * print_addy - prints addy
 * @ptr: ptr to variadic funct
 * @pc: ptr
 * Return: number of chars printed to buff
 */
int print_addy(va_list *ptr, char **pc)
{
int i;
int n;
char *ps;
uintptr_t addyint = (uintptr_t)(va_arg(*ptr, void *));
ps = int_hexsa(addyint);
n = 0;
/*if (_strlen(ps) < 8)
{
for (i = _strlen(ps); i < 8; ++i)
{
putbuff('0', pc);
++n;
}
}*/
putbuff('0', pc);
putbuff('x', pc);
n = 2;
for (i = 0; i < _strlen(ps); ++i)
{
putbuff(ps[i], pc);
++n;
}
return (n);
}
