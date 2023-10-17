#include "main.h"
/**
 * int_binary - converts integer to binary
 * @num: the integer to be converted
 * Return: the binary form in str
 */
char *int_binary(unsigned int num)
{
unsigned int i;
char *cptr;
int remainder;
void *ptr;
ptr = NULL;
i = 1;
while (num > 1)
{
remainder = num % 2;
num = (num - remainder) / 2;
ptr = _realloc(ptr, ((i + 1) * sizeof(char)));
cptr = (char *)ptr;
cptr[i - 1] = (remainder + '0');
cptr[i] = '\0';
++i;
}
ptr = _realloc(ptr, ((i + 1) * sizeof(char)));
cptr = (char *)ptr;
cptr[i - 1] = (num + '0');
cptr[i] = '\0';
cptr = reverse(cptr);
free(ptr);
return (cptr);
}
/**
 * int_octal - convert integer to octal
 * @num: the int
 * Return: return a str of the octal
 */
char *int_octal(unsigned int num)
{
unsigned int i;
char *cptr;
int remainder;
void *ptr;
ptr = NULL;
i = 1;
while (num > 7)
{
remainder = num % 8;
num = (num - remainder) / 8;
ptr = _realloc(ptr, ((i + 1) * sizeof(char)));
cptr = (char *)ptr;
cptr[i - 1] = (remainder + '0');
cptr[i] = '\0';
++i;
}
ptr = _realloc(ptr, ((i + 1) * sizeof(char)));
cptr = (char *)ptr;
cptr[i - 1] = (num + '0');
cptr[i] = '\0';
cptr = reverse(cptr);
free(ptr);
return (cptr);
}
/**
 * int_hexs - convert int to hex
 * @num: the number
 * Return: the result in string form
 */
char *int_hexs(unsigned int num)
{
unsigned int i, j, remainder;
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
/**
 * int_hexc - convert int to hex
 * @num: the number
 * Return: the result in string form
 */
char *int_hexc(unsigned int num)
{
unsigned int i, j, remainder;
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
cptr[i - 1] = ('A' + j - 10); }}}
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
cptr[i - 1] = ('A' + j - 10); }}}
else
{
cptr[i - 1] = (num + '0'); }
cptr[i] = '\0';
cptr = reverse(cptr);
free(ptr);
return (cptr); }
















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
