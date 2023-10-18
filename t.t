#include <stdio.h>
#include "main.h"







int main()
{
int len, len1;
len = _printf("%d  %i  %c  %%  %s  %b  %u  %o  %x  %X  %p\n", -293, 3200, 'A', "yaw", 98, 67, 98, 109, 109, &len);
len1 = printf("%d  %i  %c  %%  %s  98  %u  %o  %x  %X  %p\n", -293, 3200, 'A', "yaw", 67, 98, 109, 109, (void *)(&len));
printf("%d  %d\n", len, len1);
_printf("ama had grade %c in exams, she scored 98%% and she is %dyrs old.\n", 'A', 28);
len = _printf("%+d  %+d\n", 24, -24);
len1 = printf("%+d  %+d\n", 24, -24);
printf("%d  %d\n", len, len1);
len = _printf("% d  % d\n", 24, -24);
len1 = printf("% d  % d\n", 24, -24);
printf("%d  %d\n", len, len1);
len = _printf("%#x  %#o\n", 202, 24);
len1 = printf("%#x  %#o\n", 202, 24);
printf("%d  %d\n", len, len1);
len = _printf("%#X  %#o\n", 202, 24);
len1 = printf("%#X  %#o\n", 202, 24);
printf("%d  %d\n", len, len1);
return (0);
}
