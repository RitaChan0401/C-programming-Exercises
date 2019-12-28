//大きさ5(要素の数5)のint型の配列を用意する．その配列にキーボード入力でそれぞれ正の値を入力する．その配列の値を全て表示し，一番大きな値を求めて表示する．

#include <stdio.h>

int main(void){
    int a[5],i , max;
    for(i=0; i <5; i++){
        printf("数値を入力してください：");
        scanf("%d" , &a[i]);
        if(a[i] > i)
            max=a[i];
    }

    for(i=0; i < 5; i++) {
        printf("入力した値：%d\n", a[i]);
    }
    printf("一番大きな値：%d" , max);
}