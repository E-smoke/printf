#include "main.h"
/**
 * putbuff - writes to buff
 * @c: char to be written to buff
 * @pc: ptr
 */
int putbuff(char c, char **pc)
{
int l;
char **pb;
pb = pc;
if (**pc != '\0')
{
**pc = c;
++(*pc);
}
else 
{
*pb = *pc - 1023;
print_buff(*pb);
for (l = 0; l < 1024; ++l)
{
if (l == 1023)
{
*(*pb + l) = '\0';
}
else
{
*(*pb + l) = '0';
}
}
*pc = *pb;
**pc = c;
++(*pc);
}
return (1);
}
