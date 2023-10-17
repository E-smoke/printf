#include "main.h"
/**
 * nonprintable - funct
 * @ptr: ptr to variadic vars
 * @pc: ptr
 * Return: 1 on success
 */
int nonprintable(va_list *ptr, char **pc)
{
int i, j;
int len;
char *hexval;
char *str = va_arg(*ptr, char *);
len = _strlen(str);
for (i = 0; i < len; ++i)
{
if (((str[i] > 0) && (str[i] < 32)) || (str[i] >= 127))
{
hexval = int_hexc(str[i]);
putbuff('\\', pc);
putbuff('x', pc);
if (_strlen(hexval) > 1)
{
for (j = 0; j < _strlen(hexval); ++j)
{
putbuff(hexval[j], pc);
}
}
else
{
putbuff('0', pc);
putbuff(*hexval, pc);
}
}
else
{
putbuff(str[i], pc);
}
}
return (1);
}
