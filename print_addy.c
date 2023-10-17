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
/**
 * int_hexsa - prints addy
 * @num: the number
 * Return: string
 */
char *int_hexsa(uintptr_t num)
{
uintptr_t i, j, remainder;
char *cptr;
void *ptr;
ptr = NULL;
i = 1;
while (num > 15)
{
remainder = num % 16;
num = (num - remainder) / 16;
ptr = _realloc(ptr, ((i + 1) * sizeof(char)));
cptr = (char *)ptr;
if (remainder > 9)
{
for (j = 10; j < 16; ++j)
{
if (remainder == j)
{
cptr[i - 1] = ('a' + j - 10); }}}
else
{
cptr[i - 1] = (remainder + '0'); }
cptr[i] = '\0';
++i; }
ptr = _realloc(ptr, ((i + 1) * sizeof(char)));
cptr = (char *)ptr;
if (num > 9)
{
for (j = 10; j < 16; ++j)
{
if (num == j)
{
cptr[i - 1] = ('a' + j - 10); }}}
else
{
cptr[i - 1] = (num + '0'); }
cptr[i] = '\0';
cptr = reverse(cptr);
free(ptr);
return (cptr); }
