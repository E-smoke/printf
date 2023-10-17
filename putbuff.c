#include "main.h"
/**
 * putbuff - writes to buff
 * @c: char to be written to buff
 * @pc: ptr
 */
int putbuff(char c, char **pc)
{
**pc = c;
++(*pc);
return (1);
}
