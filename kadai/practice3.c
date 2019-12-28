#include <stdio.h>

int main(void) {
    int a[5], i, max, min;
    for (i = 0; i < 5; i++) {
        printf("数値を入力して下さい：");
        scanf("%d", &a[i]);
    }
    min = a[0];
    max = a[0];
    for(i =0; i < 5; i++){
        if(max < a[i]){
            max = a[i];
        } else if(min > a[i]){
            min = a[i];
        }
    }
    printf("max:%d min:%d" , max , min );

}