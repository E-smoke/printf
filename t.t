#include <stdio.h>
#include "main.h"







int main()
{
int len, len1;
len = _printf("%d  %i  %c  %%  %s  %b  %u  %o  %x\n", -293, 3200, 'A', "yaw", 98, 67, 98, 57);
len1 = printf("%d  %i  %c  %%  %s  98  %u  %o  %x\n", -293, 3200, 'A', "yaw", 67, 98, 57);
printf("%d  %d\n", len, len1);
_printf("ama had grade %c in exams, she scored 98%% and she is %dyrs old.\n", 'A', 28);

return (0);
}
