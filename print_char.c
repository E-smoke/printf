#include "main.h"
/**
 * print_char - prints char in a variadic var
 * @ptr: pointer to va_list var
 * @pc: ptr to buffer
 * Return: return 1 one success
 */
int print_char(va_list *ptr, char **pc)
{
putbuff(va_arg(*ptr, int), pc);
return (1);
}
