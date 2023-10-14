#include "main.h"
/**
 * _putchar - prints char in a variadic var
 * @c: pointer to va_list var
 * Return: return 1 one success
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

