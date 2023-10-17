#include "main.h"
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
