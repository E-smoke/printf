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
