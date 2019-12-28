#include <stdio.h>

int EvenOdd(int  n)
{
    int n_bin;

    n_bin  =  n % 2 == 0 ? printf("偶数です。") : printf("奇数です。");

    return n_bin;
}

int main()
{
    int num  , a ;

    printf("Seisu ? : ");
    scanf("%d", &num);
    a = EvenOdd(num);
    printf("%d\n" , a);

    return 0;
}
