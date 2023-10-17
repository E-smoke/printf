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
{'x', print_hexs},
{'X', print_hexc},
{'S', nonprintable},
{'p', print_addy},
{'\0', NULL}
};
int i, j, c, check, n;
va_list ptr;
char *pc;
char buff[80024];
c = 0;
va_start(ptr, format);
if (format == NULL)
{
return (-1); }
while (format[c] != '\0')
{
++c;
}
pc = buff;
for (i = 0; i < c; ++i)
{
if (format[i] != '%')
{
putbuff(format[i], &pc); }
else
{
check = 0;
if (format[i + 1] == '%')
{
print_percent(&pc);
++i;
check = 1; }
else
{
j = 0;
while (specifiers[j].c != '\0')
{
if (specifiers[j].c == format[i + 1])
{
specifiers[j].funct_ptr(&ptr, &pc);
++i;
check = 1;
break; }
++j; }}
if (check == 0)
{
return  (-1); }}}
va_end(ptr);
putbuff('\0', &pc);
n = print_buff(buff);
return (n); }
