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
spec1 specs[] = {
{'+', 'd', flag_plus},
{'+', 'i', flag_plus},
{' ', 'd', flag_space},
{' ', 'i', flag_space},
{'#', 'x', flag_hashhex},
{'#', 'o', flag_hashoct},
{'\0', '\0', NULL},
};
int i, j, c, check, n, l;
va_list ptr;
char *pc;
char buff[1024];
for (l = 0; l < 1024; ++l)
{
if (l == 1023)
{
buff[1023] = '\0';
}
else
{
buff[l] = '0';
}
}
c = 0;
va_start(ptr, format);
if (format == NULL)
{
return (-1); }
while (format[c] != '\0')
{
++c; }
n = 0;
pc = buff;
for (i = 0; i < c; ++i)
{
if (format[i] != '%')
{
n++;
putbuff(format[i], &pc); }
else
{
check = 0;
if (format[i + 1] == '%')
{
print_percent(&pc);
++i;
++n;
check = 1; }
else
{
j = 0;
while (specifiers[j].c != '\0')
{
if (specifiers[j].c == format[i + 1])
{
n += specifiers[j].funct_ptr(&ptr, &pc);
++i;
check = 1;
break; }
++j; }}
if (check == 0)
{
j = 0;
while (specs[j].c0 != '\0')
{
if ((specs[j].c0 == format[i + 1]) && (specs[j].c1 == format[i + 2]))
{
n += specs[j].funct_ptr(&ptr, &pc);
i += 2;
check = 1;
break;
}
++j;
}
if (check == 0)
{
return  (-1); }}}}
va_end(ptr);
putbuff('\0', &pc);
print_buff(buff);
return (n); }
