#include "main.h"
/**
 * print_str - prints char in a variadic var
 * @ptr: pointer to va_list var
 * Return: return 1 one success
 */
int print_str(va_list *ptr)
{
int i;
char *ps;
ps = va_arg(*ptr, char*);
if (ps == NULL)
{
_putchar('(');
_putchar('n');
_putchar('u');
_putchar('l');
_putchar('l');
_putchar(')');
return (6);

}
i = 0;
while (ps[i] != '\0')
{
_putchar(ps[i]);
++i;
}
return (i);
}
