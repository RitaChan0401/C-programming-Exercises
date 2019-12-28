#include<stdio.h>

int main()
{
    int a,b;
    a = 0;
    b = ++a;
    printf("%d\n",b);

    a = 0;
    b = a++;
    printf("%d\n",b);
    return 0;

}
