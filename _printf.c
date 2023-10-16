#include "main.h"
/**
 * _printf - mimics printf
 * @format: formatted string
 * @...: variadic var
 * Return: returns the number of chars printed on success
 */
int _printf(const char *format, ...)
{
spec specifiers[] = {
{'c', print_char},
{'s', print_str},
{'d', print_int},
{'i', print_int},
{'b', print_binary},
{'u', print_unsigned},
{'o', print_octal},
{'\0', NULL}
};
int i, j, c, check, n;
va_list ptr;
va_start(ptr, format);
c = 0;
if (format == NULL)
{
return (-1); }
while (format[c] != '\0')
{
++c; }
n = 0;
for (i = 0; i < c; ++i)
{
if (format[i] != '%')
{
n += _putchar(format[i]); }
else
{
check = 0;
if (format[i + 1] == '%')
{
n += print_percent();
++i;
check = 1; }
else
{
j = 0;
while (specifiers[j].c != '\0')
{
if (specifiers[j].c == format[i + 1])
{
n += specifiers[j].funct_ptr(&ptr);
++i;
check = 1;
break; }
++j; }}
if (check == 0)
{
return  (-1); }}}
va_end(ptr);
return (n); }
