//　キーボードから3つの数字a，b，c(整数)を入力し，関数discを呼出し，その結果を出力するプログラムを作成せよ．
//関数discは整数a，b，cが与えられたとき b*b - 4*a*c を計算し結果が，0より大きい場合は1，0の場合は0，0より小さい場合は-1を返却する．
//　実行例のように結果を表示するプログラムを作成せよ，結果の表示はmain関数内で行なうこと．
//プロトタイプ宣言： int disc(int a, int b, int c);

#include <stdio.h>
int disc(int a, int b, int c);
int main(){
    int a, b, c;
    printf("a b c? ");
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", disc(a, b, c));
}
int disc(int a, int b, int c){
    int d;
    d = b * b - 4 * a * c;
    if(d>0){
        return 1;
    } else if(d<0){
        return -1;
    }
    return 0;
}
