#include "main.h"
/**
 * _strlen - mimics strlen
 * @str: str
 * Return: length of string
 */
int _strlen(char *str)
{
int i = 0;
while (str[i] != '\0')
{
++i;
}
return (i);
}
/**
 * reverse - reverses a string
 * @str: str
 * Return: returns the reverse string
 */
char *reverse(char *str)
{
int i;
char *ptr = (char *)malloc((_strlen(str) + 1) * sizeof(char));
for (i = 0; i < _strlen(str); ++i)
{
ptr[_strlen(str) - i - 1] = str[i];
}
ptr[_strlen(str)] = '\0';
return (ptr);
}
/**
 * _memcpy - copies contents from one memory block to another
 * @optr: the block to be copied from
 * @nptr: the block to copy to
 * @numtocpy: the number of bytes to copy
 */
void _memcpy(void *optr, void *nptr, size_t numtocpy)
{
unsigned int i;
char *coptr = (char *)optr;
char *cnptr = (char *)nptr;
for (i = 0; i < numtocpy; ++i)
{
cnptr[i] = coptr[i];
}
}
/**
 * _realloc - mimics realloc
 * @optr: pointer to the block of memory
 * @byte: number of bytes to allocate
 * Return: returns pointer to the block on success
 */
void *_realloc(void *optr, size_t byte)
{
char *cnptr;
if (optr == NULL)
{
optr = malloc(byte);
return (optr);
}
if (byte == 0)
{
free(optr);
return (NULL);
}
cnptr = (char *)(malloc(byte));
_memcpy(optr, (void *)cnptr, (byte - 1));
return ((void *)cnptr);
}
/**
 * _atoi - mimics atoi
 * @num: the integer passed
 * Return: a string of the integer
 */
char *_atoi(int num)
{
void *ptr;
char *cptr;
int i;
int isnegative;
int numtochar;
i = 1;
isnegative = 0;
ptr = NULL;
if (num < 0)
{
num = (-1 * num);
isnegative = 1;
}
while (num > 9)
{
numtochar = num % 10;
num = ((num - numtochar) / 10);
ptr = _realloc(ptr, ((i + 1) * sizeof(char)));
cptr = (char *)ptr;
cptr[i - 1] = (numtochar + '0');
cptr[i] = '\0';
++i;
}
if (isnegative)
{
ptr = _realloc(ptr, ((i + 1) * sizeof(char)));
cptr = (char *)ptr;
cptr[i - 1] = (num + '0');
cptr[i] = '-';
cptr[i + 1] = '\0';
}
else
{
ptr = _realloc(ptr, ((i + 1) * sizeof(char)));
cptr = (char *)ptr;
cptr[i - 1] = (num + '0');
cptr[i] = '\0';
}
cptr = reverse(cptr);
free(ptr);
return (cptr); }
