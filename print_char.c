#include "main.h"
/**
 * print_char - prints char in a variadic var
 * @ptr: pointer to va_list var
 * Return: return 1 one success
 */
int print_char(va_list *ptr)
{
_putchar(va_arg(*ptr, int));
return (1);
}
