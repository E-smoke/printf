#include "main.h"
/**
 * print_buff - prints the content of the buffer
 * @str: str
 * Return: number of chars printed
 */
int print_buff(char *str)
{
int i;
int n = 0;
for (i = 0; i < _strlen(str); ++i)
{
_putchar(str[i]);
++n;
}
return (n);
}
