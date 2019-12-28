#include <stdio.h>

int main(void){
    int dollars,cents , a ,b ;

    printf("入力してください：");
    scanf("%d", &cents);
    a = cents / 100 ;
    b = a % 100;
    printf("%d dollars %d cents" ,  a ,b );


    return 0;
};