#include <stdio.h>

int sum(int n ){
   return n*(n+1) /2;
}

int main(){
    int num , b;
    printf("20と入力せよ");
    scanf("%d" , &num);
    b = sum(num);
    printf("%d" , b);
}

