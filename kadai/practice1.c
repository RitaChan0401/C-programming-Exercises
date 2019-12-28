#include <stdio.h>

int main(void){
    int a, b ,r , tmp;

    printf("数値を入力して下さい:");
    scanf("%d" , &a);
    printf("数値を入力して下さい:");
    scanf("%d" , &b);

    /*aの方がbより大きい数にする。逆の場合は反転させる。*/
    if(a<b){
        tmp=a;
        a=b;
        b=tmp;
    }
    r = a % b;
    while(r!=0){
        a = b;
        b = r;
        r = a % b;
    }

    printf("最大公約数は%d" , b);

}