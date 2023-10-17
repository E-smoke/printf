#include <stdio.h>
#include "main.h"







int main()
{
char ch[2048];
int len, len1;
for (len = 0; len < 2048; ++len)
{
ch[len] = 't';
}
ch[2047] = '\0';
len = _printf("%d  %i  %c  %%  %s  %b  %u  %o  %x  %X  %p\n", -293, 3200, 'A', "yaw", 98, 67, 98, 109, 109, &len);
len1 = printf("%d  %i  %c  %%  %s  98  %u  %o  %x  %X  %p\n", -293, 3200, 'A', "yaw", 67, 98, 109, 109, (void *)(&len));
printf("%d  %d\n", len, len1);
_printf("ama had grade %c in exams, she scored 98%% and she is %dyrs old.\n", 'A', 28);
printf("%d",_printf("%s", ch));
return (0);
}
