#include "main.h"
/**
 * _printf - mimics printf function
 * @format: formated string
 * @...: variadic vars
 * Return: returns the number of chars printed on success
 */
int _printf(const char *format, ...)
{
int i;
int c;
int n;
va_list ptr;
va_start(ptr, format);
c = 0;
if (format == NULL)
{
return (0);
}
while (format[c] != '\0')
{
++c;
}
n = 0;
for (i = 0; i < c; ++i)
{
if (format[i] != '%')
{
n += _putchar(format[i]);
}
else
{
if (format[i + 1] == 'c')
{
n += print_char(&ptr);
++i;
}
else if (format[i + 1] == '%')
{
n += print_percent();
++i;
}
else if (format[i + 1] == 's')
{
n += print_str(&ptr);
++i;
}
else
{
return (-1);
}
}
}
va_end(ptr);
return (n);
}
