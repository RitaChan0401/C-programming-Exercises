//void maximum(int a, int b, int c, int *maxp)の仕様の関数を作成する．この関数は整数のa, b, cを与えて，ポインタ引数である*maxpに最大値を戻す．
//上の関数を用いて，キーボード入力でa, b, cに与えて，最大値を求め表示するプログラムを作成せよ．

#include <stdio.h>

void maximum(int a, int b, int c, int *maxp);
int main()
{
    int a,b,c, max;
    printf("a? ");
    scanf("%d", &a);
    printf("b? ");
    scanf("%d", &b);
    printf("c? ");
    scanf("%d", &c);
    maximum(a, b, c, &max);
    printf("max %d\n", max);
}
void maximum(int a, int b, int c, int *maxp)
{
    if(a > b)
        if(a > c)
            *maxp = a;
        else
            *maxp = c;
    else if(b > c)
        *maxp = b;
    else
        *maxp = c;
}
