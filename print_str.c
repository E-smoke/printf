#include "main.h"
/**
 * print_str - prints char in a variadic var
 * @ptr: pointer to va_list var
 * @pc: ptr to buff
 * Return: return 1 one success
 */
int print_str(va_list *ptr, char **pc)
{
int i;
char *ps;
ps = va_arg(*ptr, char*);
if (ps == NULL)
{
putbuff('(', pc);
putbuff('n', pc);
putbuff('u', pc);
putbuff('l', pc);
putbuff('l', pc);
putbuff(')', pc);
return (6);

}
i = 0;
while (ps[i] != '\0')
{
putbuff(ps[i], pc);
++i;
}
return (i);
}
