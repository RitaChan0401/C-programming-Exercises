#include <stdio.h>

union foo {int i; double d;};

int main(void)
{
    union foo x;
    x.d = 12.34;
    printf("%f\n", x.d); /* OK, 格納したメンバdと一致 */
    printf("%d\n", x.i); /* NG, 格納したメンバdと不一致 */
}