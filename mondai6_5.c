#include <stdio.h>

int sigma(int n)
{
    int sum = 0;
    sum = (1 + n) * n / 2;
    return sum;
}

int main()
{
    int a, n;
    printf("数値を入力して下さい:");
    scanf("%d", &n);
    a=sigma(n);
    printf("%d" , a);
}

